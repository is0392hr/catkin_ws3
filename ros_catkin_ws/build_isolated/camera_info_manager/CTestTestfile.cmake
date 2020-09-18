# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/image_common/camera_info_manager
# Build directory: /home/koki/ros_catkin_ws/build_isolated/camera_info_manager
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_camera_info_manager_rostest_tests_unit_test.test "/home/koki/ros_catkin_ws/build_isolated/camera_info_manager/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/camera_info_manager/test_results/camera_info_manager/rostest-tests_unit_test.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/image_common/camera_info_manager --package=camera_info_manager --results-filename tests_unit_test.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/camera_info_manager/test_results\" /home/koki/ros_catkin_ws/src/image_common/camera_info_manager/tests/unit_test.test ")
set_tests_properties(_ctest_camera_info_manager_rostest_tests_unit_test.test PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/image_common/camera_info_manager/CMakeLists.txt;36;add_rostest;/home/koki/ros_catkin_ws/src/image_common/camera_info_manager/CMakeLists.txt;0;")
subdirs("gtest")
