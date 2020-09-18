# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/laser_filters
# Build directory: /home/koki/ros_catkin_ws/build_isolated/laser_filters
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_laser_filters_rostest_test_test_scan_filter_chain.launch "/home/koki/ros_catkin_ws/build_isolated/laser_filters/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/laser_filters/test_results/laser_filters/rostest-test_test_scan_filter_chain.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/laser_filters --package=laser_filters --results-filename test_test_scan_filter_chain.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/laser_filters/test_results\" /home/koki/ros_catkin_ws/src/laser_filters/test/test_scan_filter_chain.launch ")
set_tests_properties(_ctest_laser_filters_rostest_test_test_scan_filter_chain.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/laser_filters/CMakeLists.txt;71;add_rostest;/home/koki/ros_catkin_ws/src/laser_filters/CMakeLists.txt;0;")
add_test(_ctest_laser_filters_rostest_test_test_polygon_filter.launch "/home/koki/ros_catkin_ws/build_isolated/laser_filters/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/laser_filters/test_results/laser_filters/rostest-test_test_polygon_filter.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/laser_filters --package=laser_filters --results-filename test_test_polygon_filter.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/laser_filters/test_results\" /home/koki/ros_catkin_ws/src/laser_filters/test/test_polygon_filter.launch ")
set_tests_properties(_ctest_laser_filters_rostest_test_test_polygon_filter.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/laser_filters/CMakeLists.txt;72;add_rostest;/home/koki/ros_catkin_ws/src/laser_filters/CMakeLists.txt;0;")
add_test(_ctest_laser_filters_rostest_test_test_speckle_filter.launch "/home/koki/ros_catkin_ws/build_isolated/laser_filters/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/laser_filters/test_results/laser_filters/rostest-test_test_speckle_filter.xml" "--return-code" "/usr/bin/python3 /home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/koki/ros_catkin_ws/src/laser_filters --package=laser_filters --results-filename test_test_speckle_filter.xml --results-base-dir \"/home/koki/ros_catkin_ws/build_isolated/laser_filters/test_results\" /home/koki/ros_catkin_ws/src/laser_filters/test/test_speckle_filter.launch ")
set_tests_properties(_ctest_laser_filters_rostest_test_test_speckle_filter.launch PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/laser_filters/CMakeLists.txt;73;add_rostest;/home/koki/ros_catkin_ws/src/laser_filters/CMakeLists.txt;0;")
add_test(_ctest_laser_filters_gtest_test_shadow_detector "/home/koki/ros_catkin_ws/build_isolated/laser_filters/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/laser_filters/test_results/laser_filters/gtest-test_shadow_detector.xml" "--return-code" "/home/koki/ros_catkin_ws/devel_isolated/laser_filters/lib/laser_filters/test_shadow_detector --gtest_output=xml:/home/koki/ros_catkin_ws/build_isolated/laser_filters/test_results/laser_filters/gtest-test_shadow_detector.xml")
set_tests_properties(_ctest_laser_filters_gtest_test_shadow_detector PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/koki/ros_catkin_ws/src/laser_filters/CMakeLists.txt;75;catkin_add_gtest;/home/koki/ros_catkin_ws/src/laser_filters/CMakeLists.txt;0;")
subdirs("gtest")