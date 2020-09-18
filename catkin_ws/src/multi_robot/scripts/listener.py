#!/usr/bin/env python3
import rospy
from std_msgs.msg import Float64MultiArray
 
def callback(data):
  rospy.loginfo(rospy.get_caller_id(),data.data)
     
def listener():
  rospy.init_node('listener')
  rospy.Subscriber("controler", Float64MultiArray, callback)

  # spin() simply keeps python from exiting until this node is stopped
  rospy.spin()

if __name__ == '__main__':
    listener()