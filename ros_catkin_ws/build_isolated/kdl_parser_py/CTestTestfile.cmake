# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/kdl_parser/kdl_parser_py
# Build directory: /home/koki/ros_catkin_ws/build_isolated/kdl_parser_py
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_kdl_parser_py_rostest_test_test_kdl_parser.launch "/home/koki/ros_catkin_ws/build_isolated/kdl_parser_py/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/kdl_parser_py/test_results/kdl_parser_py/rostest-test_test_kdl_parser.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/kdl_parser/kdl_parser_py --package=kdl_parser_py --results-filename test_test_kdl_parser.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/kdl_parser_py/test_results\" /home/koki/ros_catkin_ws/src/kdl_parser/kdl_parser_py/test/test_kdl_parser.launch ")
set_tests_properties(_ctest_kdl_parser_py_rostest_test_test_kdl_parser.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/kdl_parser/kdl_parser_py/CMakeLists.txt;18;add_rostest;/home/koki/ros_catkin_ws/src/kdl_parser/kdl_parser_py/CMakeLists.txt;0;")
subdirs("gtest")
