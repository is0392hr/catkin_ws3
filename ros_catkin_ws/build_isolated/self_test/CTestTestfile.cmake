# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/diagnostics/self_test
# Build directory: /home/koki/ros_catkin_ws/build_isolated/self_test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_self_test_rostest_test_launch_nominal_test.launch "/home/koki/ros_catkin_ws/build_isolated/self_test/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/self_test/test_results/self_test/rostest-test_launch_nominal_test.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/diagnostics/self_test --package=self_test --results-filename test_launch_nominal_test.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/self_test/test_results\" /home/koki/ros_catkin_ws/src/diagnostics/self_test/test/launch/nominal_test.launch ")
set_tests_properties(_ctest_self_test_rostest_test_launch_nominal_test.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/diagnostics/self_test/CMakeLists.txt;39;add_rostest;/home/koki/ros_catkin_ws/src/diagnostics/self_test/CMakeLists.txt;0;")
add_test(_ctest_self_test_rostest_test_launch_no_id_test.launch "/home/koki/ros_catkin_ws/build_isolated/self_test/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/self_test/test_results/self_test/rostest-test_launch_no_id_test.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/diagnostics/self_test --package=self_test --results-filename test_launch_no_id_test.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/self_test/test_results\" /home/koki/ros_catkin_ws/src/diagnostics/self_test/test/launch/no_id_test.launch ")
set_tests_properties(_ctest_self_test_rostest_test_launch_no_id_test.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/diagnostics/self_test/CMakeLists.txt;40;add_rostest;/home/koki/ros_catkin_ws/src/diagnostics/self_test/CMakeLists.txt;0;")
add_test(_ctest_self_test_rostest_test_launch_error_test.launch "/home/koki/ros_catkin_ws/build_isolated/self_test/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/self_test/test_results/self_test/rostest-test_launch_error_test.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/diagnostics/self_test --package=self_test --results-filename test_launch_error_test.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/self_test/test_results\" /home/koki/ros_catkin_ws/src/diagnostics/self_test/test/launch/error_test.launch ")
set_tests_properties(_ctest_self_test_rostest_test_launch_error_test.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/diagnostics/self_test/CMakeLists.txt;41;add_rostest;/home/koki/ros_catkin_ws/src/diagnostics/self_test/CMakeLists.txt;0;")
add_test(_ctest_self_test_rostest_test_launch_exception_test.launch "/home/koki/ros_catkin_ws/build_isolated/self_test/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/self_test/test_results/self_test/rostest-test_launch_exception_test.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/diagnostics/self_test --package=self_test --results-filename test_launch_exception_test.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/self_test/test_results\" /home/koki/ros_catkin_ws/src/diagnostics/self_test/test/launch/exception_test.launch ")
set_tests_properties(_ctest_self_test_rostest_test_launch_exception_test.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/diagnostics/self_test/CMakeLists.txt;42;add_rostest;/home/koki/ros_catkin_ws/src/diagnostics/self_test/CMakeLists.txt;0;")
subdirs("gtest")
subdirs("test")
