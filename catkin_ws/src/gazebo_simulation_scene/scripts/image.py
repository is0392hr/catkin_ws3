#! /usr/bin/env python3

# rospy for the subscriber
import rospy
# ROS Image message
from sensor_msgs.msg import CompressedImage
# ROS Image message -> OpenCV2 image converter
from cv_bridge import CvBridge, CvBridgeError
# OpenCV2 for saving an image
import cv2, cv_bridge

import numpy as np


class Camera:
	def __init__(self):
		self.bridge = cv_bridge.CvBridge()
		image = rospy.Subscriber('/unity_image/compressed_d15', CompressedImage, self.image_callback)
		
	def image_callback(self, msg):
		
		image = self.bridge.compressed_imgmsg_to_cv2(msg, desired_encoding='bgr8')
		hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
		print(hsv[20][500])
		lower_flood = np.array([90, 80, 100]) # np.array([100, 100, 0]) #yellow #np.array([0, 100, 100])
		upper_flood = np.array([255,255,255]) # np.array([255, 255, 120]) #yellow #np.array([100, 255, 255])
		lower_ground = np.array([0, 0, 0])
		upper_ground = np.array([150, 130, 100])
		mask_flood = cv2.inRange(hsv, lower_flood, upper_flood)
		mask_ground = cv2.inRange(hsv, lower_ground, upper_ground)
		
		h, w, d = image.shape
		#print(h,w)
		
		search_top = 0#3*h/4
		search_bot = h#3*h/4 + 20
		mask_flood[0:search_top, 0:w] = 0
		mask_flood[search_bot:h, 0:w] = 0
		mask_ground[0:search_top, 0:w] = 0
		mask_ground[search_bot:h, 0:w] = 0
		M_flood = cv2.moments(mask_flood)
		M_ground = cv2.moments(mask_ground)
		
		if M_flood['m00'] > 0 and M_ground['m00'] > 0:
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

		cv2.imshow('camera_d8', image)
		cv2.imshow('camera_d8_mask', mask_flood)
		cv2.waitKey(3)

# Instantiate CvBridge
#bridge = CvBridge()


def main():
	rospy.init_node('camera_jpg')

	camera = Camera()

	rospy.spin()

if __name__ == '__main__':
	try:
		main()
	except rospy.ROSInterruptException:
		pass
