# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/rosauth
# Build directory: /home/koki/ros_catkin_ws/build_isolated/rosauth
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rosauth_rostest_test_ros_mac_authentication.test "/home/koki/ros_catkin_ws/build_isolated/rosauth/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/rosauth/test_results/rosauth/rostest-test_ros_mac_authentication.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/rosauth --package=rosauth --results-filename test_ros_mac_authentication.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/rosauth/test_results\" /home/koki/ros_catkin_ws/src/rosauth/test/ros_mac_authentication.test ")
set_tests_properties(_ctest_rosauth_rostest_test_ros_mac_authentication.test PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/rosauth/CMakeLists.txt;74;add_rostest;/home/koki/ros_catkin_ws/src/rosauth/CMakeLists.txt;0;")
subdirs("gtest")
