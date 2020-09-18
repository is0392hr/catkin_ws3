# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/rosbridge_suite/rosbridge_server
# Build directory: /home/koki/ros_catkin_ws/build_isolated/rosbridge_server
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rosbridge_server_rostest_test_websocket_test_smoke.test "/home/koki/ros_catkin_ws/build_isolated/rosbridge_server/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/rosbridge_server/test_results/rosbridge_server/rostest-test_websocket_test_smoke.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/rosbridge_suite/rosbridge_server --package=rosbridge_server --results-filename test_websocket_test_smoke.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/rosbridge_server/test_results\" /home/koki/ros_catkin_ws/src/rosbridge_suite/rosbridge_server/test/websocket/test_smoke.test ")
set_tests_properties(_ctest_rosbridge_server_rostest_test_websocket_test_smoke.test PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/rosbridge_suite/rosbridge_server/CMakeLists.txt;29;add_rostest;/home/koki/ros_catkin_ws/src/rosbridge_suite/rosbridge_server/CMakeLists.txt;0;")
subdirs("gtest")
