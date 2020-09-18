#!/bin/sh
rosservice call /drone01/enable_motors true
rosservice call /drone02/enable_motors true
rosservice call /drone03/enable_motors true
rosservice call /drone04/enable_motors true
rosservice call /drone05/enable_motors true
rosservice call /drone06/enable_motors true
rosservice call /drone07/enable_motors true
rosservice call /drone08/enable_motors true
rosservice call /drone09/enable_motors true
rosservice call /drone10/enable_motors true
rosservice call /drone11/enable_motors true
rosservice call /drone12/enable_motors true
rosservice call /drone13/enable_motors true
rosservice call /drone14/enable_motors true
rosservice call /drone15/enable_motors true
rosservice call /drone16/enable_motors true
rosservice call /drone17/enable_motors true
sleep 5

gnome-terminal --tab -e "rosrun multi_robot_unity test_d2.py" \
--tab -e "rosrun multi_robot_unity test_d1.py"
sleep 20

gnome-terminal --tab -e "rosrun multi_robot_unity test_d4.py" \
--tab -e "rosrun multi_robot_unity test_d9.py"

sleep 10

gnome-terminal --tab -e "rosrun multi_robot_unity test_d5.py" \
--tab -e "rosrun multi_robot_unity test_d8.py" 

sleep 5
gnome-terminal --tab -e "rosrun multi_robot_unity voronoi.py"

sleep 5
gnome-terminal \
--tab -e "rosrun multi_robot_unity test_d10.py"  --tab -e "rosrun multi_robot_unity test_d11.py" \
--tab -e "rosrun multi_robot_unity test_d12.py" --tab -e "rosrun multi_robot_unity test_d13.py" \
--tab -e "rosrun multi_robot_unity test_d14.py" --tab -e "rosrun multi_robot_unity test_d15.py" \
--tab -e "rosrun multi_robot_unity test_d16.py" --tab -e "rosrun multi_robot_unity test_d17.py" \
--tab -e "rosrun multi_robot_unity test_d3.py"  

sleep 30
gnome-terminal --tab -e "rosrun multi_robot_unity test_d6.py" --tab -e "rosrun multi_robot_unity test_d7.py" 

