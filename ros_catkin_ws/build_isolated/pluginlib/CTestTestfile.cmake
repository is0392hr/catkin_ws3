# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/pluginlib
# Build directory: /home/koki/ros_catkin_ws/build_isolated/pluginlib
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_pluginlib_gtest_pluginlib_utest "/home/koki/ros_catkin_ws/build_isolated/pluginlib/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/pluginlib/test_results/pluginlib/gtest-pluginlib_utest.xml" "--return-code" "/home/koki/ros_catkin_ws/devel_isolated/pluginlib/lib/pluginlib/pluginlib_utest --gtest_output=xml:/home/koki/ros_catkin_ws/build_isolated/pluginlib/test_results/pluginlib/gtest-pluginlib_utest.xml")
set_tests_properties(_ctest_pluginlib_gtest_pluginlib_utest PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/koki/ros_catkin_ws/src/pluginlib/CMakeLists.txt;20;catkin_add_gtest;/home/koki/ros_catkin_ws/src/pluginlib/CMakeLists.txt;0;")
add_test(_ctest_pluginlib_gtest_pluginlib_unique_ptr_test "/home/koki/ros_catkin_ws/build_isolated/pluginlib/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/pluginlib/test_results/pluginlib/gtest-pluginlib_unique_ptr_test.xml" "--return-code" "/home/koki/ros_catkin_ws/devel_isolated/pluginlib/lib/pluginlib/pluginlib_unique_ptr_test --gtest_output=xml:/home/koki/ros_catkin_ws/build_isolated/pluginlib/test_results/pluginlib/gtest-pluginlib_unique_ptr_test.xml")
set_tests_properties(_ctest_pluginlib_gtest_pluginlib_unique_ptr_test PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/koki/ros_catkin_ws/src/pluginlib/CMakeLists.txt;29;catkin_add_gtest;/home/koki/ros_catkin_ws/src/pluginlib/CMakeLists.txt;0;")
subdirs("gtest")
