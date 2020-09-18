# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/laser_assembler
# Build directory: /home/koki/ros_catkin_ws/build_isolated/laser_assembler
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_laser_assembler_rostest_test_test_laser_assembler.launch "/home/koki/ros_catkin_ws/build_isolated/laser_assembler/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/laser_assembler/test_results/laser_assembler/rostest-test_test_laser_assembler.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/laser_assembler --package=laser_assembler --results-filename test_test_laser_assembler.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/laser_assembler/test_results\" /home/koki/ros_catkin_ws/src/laser_assembler/test/test_laser_assembler.launch ")
set_tests_properties(_ctest_laser_assembler_rostest_test_test_laser_assembler.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/laser_assembler/CMakeLists.txt;81;add_rostest;/home/koki/ros_catkin_ws/src/laser_assembler/CMakeLists.txt;0;")
subdirs("gtest")
