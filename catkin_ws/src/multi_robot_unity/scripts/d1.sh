#!/bin/sh
rosservice call /drone02/enable_motors true
sleep 1
rosrun multi_robot_unity test_d2.py
