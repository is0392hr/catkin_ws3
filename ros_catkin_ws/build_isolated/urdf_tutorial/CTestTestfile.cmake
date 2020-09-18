# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/urdf_tutorial
# Build directory: /home/koki/ros_catkin_ws/build_isolated/urdf_tutorial
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_urdf_tutorial_roslaunch-check_launch "/home/koki/ros_catkin_ws/build_isolated/urdf_tutorial/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/urdf_tutorial/test_results/urdf_tutorial/roslaunch-check_launch.xml" "--return-code" "/home/koki/.local/lib/python3.6/site-packages/cmake/data/bin/cmake -E make_directory /home/koki/ros_catkin_ws/build_isolated/urdf_tutorial/test_results/urdf_tutorial" "/home/koki/ros_catkin_ws/install_isolated/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/koki/ros_catkin_ws/build_isolated/urdf_tutorial/test_results/urdf_tutorial/roslaunch-check_launch.xml\" \"/home/koki/ros_catkin_ws/src/urdf_tutorial/launch\" ")
set_tests_properties(_ctest_urdf_tutorial_roslaunch-check_launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/roslaunch/cmake/roslaunch-extras.cmake;66;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/urdf_tutorial/CMakeLists.txt;9;roslaunch_add_file_check;/home/koki/ros_catkin_ws/src/urdf_tutorial/CMakeLists.txt;0;")
subdirs("gtest")
