#!/usr/bin/env python3

import os
import sys
import tempfile
import csv
import tf
import rospy
import math
import message_filters
from std_msgs.msg import Float64MultiArray, String
from gazebo_msgs.msg import ModelStates
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point, Quaternion
from geometry_msgs.msg import Twist, Vector3
import numpy as np

import cv2, cv_bridge
from sensor_msgs.msg import Image, CameraInfo

import configparser
import time 

MAX_DIST = 20

global control
control = [0,0,0]

targets, centroid, key = [], [], []
global targets, centroid, key

def get_params():
    config = configparser.ConfigParser()
    config.read('index.txt')
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
        if key == 'drone14':
            d14 = int(value)
        if key == 'drone15':
            d15 = int(value)
        if key == 'drone16':
            d16 = int(value)
        if key == 'drone17':
            d17 = int(value)
        if key == 'drone18':
            d18 = int(value)
        if key == 'drone19':
            d19 = int(value)
        if key == 'drone20':
            d20 = int(value)
        if key == 'drone21':
            d21 = int(value)
        if key == 'drone22':
            d22 = int(value)    
        if key == 'drone23':
            d23 = int(value)
        if key == 'drone24':
            d24 = int(value)
        if key == 'drone25':
            d25 = int(value)
        if key == 'drone26':
            d26 = int(value)
        if key == 'drone27':
            d27 = int(value)
        if key == 'drone28':
            d28 = int(value)
        if key == 'drone29':
            d29 = int(value)
        if key == 'drone30':
            d30 = int(value)
        if key == 'drone31':
            d31 = int(value)
        if key == 'drone32':
            d32 = int(value)    
        if key == 'drone33':
            d33 = int(value)
        if key == 'drone34':
            d34 = int(value)
        if key == 'drone35':
            d35 = int(value)
        if key == 'drone36':
            d36 = int(value)
        if key == 'drone37':
            d37 = int(value)
        '''
        if key == 'drone08':
            d8 = int(value)
        if key == 'drone09':
            d9 = int(value)
        if key == 'drone10':
            d10 = int(value)
        '''

    params = [d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,
            d11,d12,d13,d14,d15,d16,d17,d18,d19,d20,
            d21,d22,d23,d24,d25,d26,d27,d28,d29,d30,
            d31,d32,d33,d34,d35,d36,d37]
    return params


idx = get_params()
print(idx)

class Follower:
    def __init__(self):
        self.pos = rospy.Subscriber("controler", Float64MultiArray, self.pos_callback)
        self.centroid = rospy.Subscriber("centroid", Float64MultiArray, self.centroid_callback)
        self.key = rospy.Subscriber("key", String,self.key_callback)
        self.data = rospy.Subscriber('/gazebo/model_states', ModelStates, self.callback)
        self.cmd_vel_pub = rospy.Publisher('drone10/cmd_vel',Twist, queue_size=10) 
        self.twist = Twist()
    
    def pos_callback(self, data):
        #print(data.data)
        targets = np.array(data.data)
        global targets
        targets = targets.reshape([-1,2])

    def centroid_callback(self, data):
        #print(data.data)
        centroid = np.array(data.data)
        global centroid
              
    def key_callback(self, data):
        #print(data.data)
        key = data.data 
        global key

    def callback(self, data):


        drone10 = data.pose[idx[9]]
        drone10_vel = data.twist[idx[9]]
        d10_posX = drone10.position.x
        d10_posY = drone10.position.y
        d10_posZ = drone10.position.z
        d10_velX = drone10_vel.linear.x
        d10_velY = drone10_vel.linear.y

        
        if key == 'd':
            global targets
            target = targets[0]
            posX = target[0]
            posY = target[1]
            errX = posX - d10_posX
            errY = posY - d10_posY

            print("target: ", target, "Err: ", (errX, errY))

            ####################    
            ## POSITION BASED ##
            ####################

            calc_odom = (Vector3(-0.3*(d10_posX-posX), -0.3*(d10_posY-posY),-3*(d10_posZ-5)))
            pub = self.cmd_vel_pub
            pub.publish(Twist(calc_odom, Vector3(0,0,0)))
            #print('position control now')

        else:
            global centroid
            if len(centroid)>0:
                cX, cY = centroid
                #print("centroid: ", cX, cY)
                 
                calc_odom = (Vector3(-0.2*(d10_posX-(cX-2)), -0.2*(d10_posY-(cY-2)),-3*(d10_posZ-5)))
                pub = self.cmd_vel_pub
                pub.publish(Twist(calc_odom, Vector3(0,0,0)))
        rospy.Rate(1).sleep
           

    
def listener():
    rospy.init_node('d_10')
    follower = Follower()
    rospy.spin()

if __name__ == '__main__':
    start = time.time()
    try:
        listener()
    except rospy.ROSInterruptException:
        pass
# END ALL
