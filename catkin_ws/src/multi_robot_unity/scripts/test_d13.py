#!/usr/bin/env python3

import rospy
import os 
import math
import message_filters
from std_msgs.msg import Float64MultiArray, String
from gazebo_msgs.msg import ModelStates
from gazebo_msgs.msg import ModelState
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point, Quaternion
from geometry_msgs.msg import Twist, Vector3
import numpy as np

from scipy.integrate import odeint

import cv2, cv_bridge
from sensor_msgs.msg import Image, CameraInfo, CompressedImage

import configparser
import time

MAX_DIST = 30

control = [0,0,0]
targets, centroid, key = [], [], []

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
        if key == 'drone10':
            d10 = int(value)
        if key == 'drone11':
            d11 = int(value)
        if key == 'drone12':
            d12 = int(value)
        if key == 'drone13':
            d13 = int(value)


    params = [d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13]
    return params


idx = get_params()

print(idx)

class Follower:
    def __init__(self):
    
        self.bridge = cv_bridge.CvBridge()
        image = rospy.Subscriber('/unity_image/compressed_d13', CompressedImage, self.image_callback)
        self.pos = rospy.Subscriber("controler", Float64MultiArray, self.pos_callback)
        self.centroid = rospy.Subscriber("centroid", Float64MultiArray, self.centroid_callback)
        self.key = rospy.Subscriber("key", String,self.key_callback)
        self.data = rospy.Subscriber('/gazebo/model_states', ModelStates, self.callback)
        self.cmd_vel_pub = rospy.Publisher('drone13/cmd_vel',Twist, queue_size=10)
        self.twist = Twist()
     
    def pos_callback(self, data):
        #print(data.data)
        global targets
        targets = np.array(data.data)
        targets = targets.reshape([-1,2]) 

    def centroid_callback(self, data):
        #print(data.data)
        global centroid
        centroid = np.array(data.data)
            
    def key_callback(self, data):
        #print(data.data)
        global key
        print(key)
        key = data.data  
    
    def image_callback(self, msg):

        image = self.bridge.compressed_imgmsg_to_cv2(msg,desired_encoding='bgr8') #bgr8

        #cv2.imshow("d13", image)
        #cv2.waitKey(3)
    

    def callback(self, data):
        global key
        
        drone13 = data.pose[idx[12]]
        drone13_vel = data.twist[idx[12]]
        d13_posX = drone13.position.x
        d13_posY = drone13.position.y
        d13_posZ = drone13.position.z
        d13_velX = drone13_vel.linear.x
        d13_velY = drone13_vel.linear.y
        if key == 'd':
            global targets
            target = targets[3]
            posX = target[0]
            posY = target[1]
            errX = posX - d13_posX
            errY = posY - d13_posY

            print("target: ", target, "Err: ", (errX, errY))

            ####################    
            ## POSITION BASED ##
            ####################

            # def my_callback(event):
            #     print 'Timer called at ' + str(event.current_real)
                
            # rospy.Timer(rospy.Duration(1), my_callback)
            

            calc_odom = (Vector3(-0.3*(d13_posX-posX), -0.3*(d13_posY-posY),-3*(d13_posZ-8)))
            pub = self.cmd_vel_pub
            pub.publish(Twist(calc_odom, Vector3(0,0,0)))
            #print('position control now')

        else:
            global centroid
            if len(centroid)>0:
                cX, cY = centroid
                #print("centroid: ", cX, cY)
                 
                calc_odom = (Vector3(-0.2*(d13_posX-(cX-2)), -0.2*(d13_posY-(cY+2)),-3*(d13_posZ-8)))
                pub = self.cmd_vel_pub
                pub.publish(Twist(calc_odom, Vector3(0,0,0)))
           
        rospy.Rate(1).sleep
           

    
def listener():
    rospy.init_node('d_13')
    follower = Follower()
    rospy.spin()

if __name__ == '__main__':
    start = time.time()
    try:
        listener()
    except rospy.ROSInterruptException:
        pass
# END ALL
