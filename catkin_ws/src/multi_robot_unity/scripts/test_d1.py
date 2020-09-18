#!/usr/bin/env python3

import rospy
import os
import math
import message_filters
from std_msgs.msg import String
from gazebo_msgs.msg import ModelStates
from geometry_msgs.msg import Point, Quaternion
from geometry_msgs.msg import Twist, Vector3
import numpy as np

import cv2, cv_bridge
from sensor_msgs.msg import CompressedImage, CameraInfo

import configparser
import time


MAX_DIST = 20

control = [0,0,0]

def get_params():
    config = configparser.ConfigParser()
    config.read(os.path.join(os.path.dirname(__file__), 'index.txt'))
    item_list = config.items('index')

    for item in item_list:
        key = item[0]
        value = item[1]

        if key == 'drone01':
            d1 = int(value)
        if key == 'drone02':
            d2 = int(value)    
        if key == 'drone03':
            d3 = int(value)
        if key == 'drone04':
            d4 = int(value)
        if key == 'drone05':
            d5 = int(value)
        if key == 'drone06':
            d6 = int(value)
        if key == 'drone07':
            d7 = int(value)
        if key == 'drone08':
            d8 = int(value)
        if key == 'drone09':
            d9 = int(value)

    params = [d1,d2,d3,d4,d5,d6,d7,d8, d9]
    return params

idx = get_params()

print(idx)

class Follower:
    def __init__(self):
   
        self.bridge = cv_bridge.CvBridge()
        image = rospy.Subscriber('/unity_image/compressed_d1', CompressedImage, self.image_callback)
        self.data = rospy.Subscriber('/gazebo/model_states', ModelStates, self.callback)
        self.cmd_vel_pub = rospy.Publisher('drone01/cmd_vel',Twist, queue_size=10)
        self.twist = Twist()
        
    
    def image_callback(self, msg):

        #print(d01_posZ)
        
        image = self.bridge.compressed_imgmsg_to_cv2(msg, desired_encoding='bgr8')
        hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
        lower_flood = np.array([50, 50, 100]) # np.array([100, 100, 0]) #yellow #np.array([0, 100, 100])
        upper_flood = np.array([255,255,255]) # np.array([255, 255, 120]) #yellow #np.array([100, 255, 255])
        lower_ground = np.array([0, 0, 0])
        upper_ground = np.array([150, 130, 100])
        mask_flood = cv2.inRange(hsv, lower_flood, upper_flood)
        mask_ground = cv2.inRange(hsv, lower_ground, upper_ground)
        
        h, w, d = image.shape
        
        search_top = 0#3*h/4
        search_bot = h#3*h/4 + 20
        mask_flood[0:search_top, 0:w] = 0
        mask_flood[search_bot:h, 0:w] = 0
        mask_ground[0:search_top, 0:w] = 0
        mask_ground[search_bot:h, 0:w] = 0
        M_flood = cv2.moments(mask_flood)
        M_ground = cv2.moments(mask_ground)

        global control
        
        if M_flood['m00'] > 0 and M_ground['m00'] > 0:
            print('fine')
            cx_flood = int(M_flood['m10']/M_flood['m00'])
            cy_flood = int(M_flood['m01']/M_flood['m00'])
            cv2.circle(image, (cx_flood, cy_flood), 10, (0,0,255), -1)
            cx_ground = int(M_ground['m10']/M_ground['m00'])
            cy_ground = int(M_ground['m01']/M_ground['m00'])
            cv2.circle(image, (cx_ground, cy_ground), 10, (255,0,0), -1)

            cx_middle = min(cx_flood, cx_ground) + int((max(cx_flood, cx_ground)-min(cx_flood, cx_ground))/2)
            cy_middle = min(cy_flood, cy_ground) + int((max(cy_flood, cy_ground)-min(cy_flood, cy_ground))/2)
            cv2.circle(image, (cx_middle, cy_middle), 10, (0,0,0), -1)
            cv2.line(image, (cx_flood, cy_flood), (cx_ground, cy_ground), (0,255,0), 1)

           
            
            # BEGIN CONTROL
            err_x = cx_middle - w/2
            err_y = cy_middle - h/2
            
            #print("err_x: ", err_x, "err_y: ", err_y)
            
            velX = -float(err_y)/300.0 + 1.5
            velY = -float(err_x)/70.0
            velZ = -0.8
            control = [velX, velY, velZ]
            self.twist.angular.z = -float(math.atan2((cy_flood - cy_ground),(cx_flood - cx_ground)))*2.5

            
            self.cmd_vel_pub.publish(self.twist)
        
        elif M_flood['m00'] > 0 and M_ground['m00'] <= 0 and M_ground['m10'] <= 0:
            print('lost_ground')
            state = 0
            cx_flood = int(M_flood['m10']/M_flood['m00'])
            cy_flood = int(M_flood['m01']/M_flood['m00'])
            cv2.circle(image, (cx_flood, cy_flood), 10, (0,0,255), -1)
            velX = 0.0
            velY = 0.0
            velZ = 2.8
            
            
        elif M_flood['m00'] <= 0 and M_flood['m10'] <= 0 and M_ground['m00'] > 0:
            print('lost_flood')
            state = 0
            cx_ground = int(M_ground['m10']/M_ground['m00'])
            cy_ground = int(M_ground['m01']/M_ground['m00'])
            cv2.circle(image, (cx_ground, cy_ground), 10, (255,0,0), -1)
            velX = 0.0
            velY = 0.0
            velZ = 2.8

            
            
        else:
            state = 0
            velX = 0.0
            velY = 0.0
            velZ = 0.0
            self.twist.angular.z = 0.0
            self.cmd_vel_pub.publish(self.twist)
            print("else")
        
        control = [velX, velY, velZ]
        cv2.imshow("d1", image)
        cv2.imshow("d1_mask", mask_flood)
        cv2.waitKey(3)
    

    def callback(self, data):

        drone01 = data.pose[idx[0]]
        drone01_vel = data.twist[idx[0]]
        d01_posX = drone01.position.x
        d01_posY = drone01.position.y
        d01_posZ = drone01.position.z
        d01_velX = drone01_vel.linear.x
        d01_velY = drone01_vel.linear.y

        drone02 = data.pose[idx[1]]
        drone02_vel = data.twist[idx[1]]
        d02_posX = drone02.position.x
        d02_posY = drone02.position.y
        d02_posZ = drone02.position.z
        d02_velX = drone02_vel.linear.x
        d02_velY = drone02_vel.linear.y

        drone04 = data.pose[idx[3]]
        drone04_vel = data.twist[idx[3]]
        d04_posX = drone04.position.x
        d04_posY = drone04.position.y
        d04_posZ = drone04.position.z
        d04_velX = drone04_vel.linear.x
        d04_velY = drone04_vel.linear.y


        drone08 = data.pose[idx[7]]
        drone08_vel = data.twist[idx[7]]
        d08_posX = drone08.position.x
        d08_posY = drone08.position.y
        d08_posZ = drone08.position.z
        d08_velX = drone08_vel.linear.x
        d08_velY = drone08_vel.linear.y

        drone09 = data.pose[idx[8]]
        drone09_vel = data.twist[idx[8]]
        d09_posX = drone09.position.x
        d09_posY = drone09.position.y
        d09_posZ = drone09.position.z
        d09_velX = drone09_vel.linear.x
        d09_velY = drone08_vel.linear.y
        
        ####################    
        ## POSITION BASED ##
        ####################
        global control
        velX, velY, velZ = control
        print("ini velx: ", velX)
        repul = 0.0
        curr_time = time.time() - start

        if d01_posZ >= 3 and curr_time > 20:
            
            dist_21 = float(math.sqrt((d01_posX-d02_posX)**2 + (d01_posY-d02_posY)**2))
            if dist_21 < MAX_DIST and d02_posZ >= 2:
                print("d21 REPUL APPEAR!!", dist_21)
                b21 = 1.8*float((20.0/(MAX_DIST**7))*(dist_21**7) - (70.0/(MAX_DIST**6))*(dist_21**6) + (84.0/(MAX_DIST**5))*(dist_21**5) - (35.0/(MAX_DIST**4))*(dist_21**4) +1)
            else:
                b21 = 0.0


            dist_19 = float(math.sqrt((d09_posX-d01_posX)**2 + (d09_posY-d01_posY)**2))
            if dist_19 <= MAX_DIST and d09_posZ >= 2:
                print("d19 REPUL APPEAR!!", dist_19)
                b19 = -0.4*float((20.0/(MAX_DIST**7))*(dist_19**7) - (70.0/(MAX_DIST**6))*(dist_19**6) + (84.0/(MAX_DIST**5))*(dist_19**5) - (35.0/(MAX_DIST**4))*(dist_19**4) +1)

            else:
                b19 = 0.0

            repul = round((b21+b19), 2)

        else:
            repul = 0.0
            

        new_velX = velX - repul
        pub = self.cmd_vel_pub
        print(new_velX, velY)
        control = [new_velX,velY,-2.0*(d01_posZ-5)]
        calc_odom = (Vector3(new_velX,velY,-2.0*(d01_posZ-5)))
        pub.publish(Twist(calc_odom, Vector3(0,0,0)))
        print('position control now')
        rospy.Rate(10).sleep
           

def listener():
    MAX_DIST = 5
    rospy.init_node('d_1')
    while not rospy.is_shutdown():
        follower = Follower()
    #rospy.spin()

if __name__ == '__main__':
    start = time.time()
    
    try:
        listener()
    except rospy.ROSInterruptException:
        pass
# END ALL
