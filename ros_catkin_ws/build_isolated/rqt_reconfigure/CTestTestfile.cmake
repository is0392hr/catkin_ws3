# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/rqt_reconfigure
# Build directory: /home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rqt_reconfigure_roslint_package "/home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure/test_results/rqt_reconfigure/roslint-rqt_reconfigure.xml" "--working-dir" "/home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure" "--return-code" "/home/koki/ros_catkin_ws/install_isolated/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure/test_results/rqt_reconfigure/roslint-rqt_reconfigure.xml make roslint_rqt_reconfigure")
set_tests_properties(_ctest_rqt_reconfigure_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/rqt_reconfigure/CMakeLists.txt;24;roslint_add_test;/home/koki/ros_catkin_ws/src/rqt_reconfigure/CMakeLists.txt;0;")
add_test(_ctest_rqt_reconfigure_nosetests_test "/home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure/test_results/rqt_reconfigure/nosetests-test.xml" "--return-code" "\"/home/koki/.local/lib/python3.6/site-packages/cmake/data/bin/cmake\" -E make_directory /home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure/test_results/rqt_reconfigure" "/usr/bin/nosetests3 -P --process-timeout=60 --where=/home/koki/ros_catkin_ws/src/rqt_reconfigure/test --with-xunit --xunit-file=/home/koki/ros_catkin_ws/build_isolated/rqt_reconfigure/test_results/rqt_reconfigure/nosetests-test.xml")
set_tests_properties(_ctest_rqt_reconfigure_nosetests_test PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/rqt_reconfigure/CMakeLists.txt;25;catkin_add_nosetests;/home/koki/ros_catkin_ws/src/rqt_reconfigure/CMakeLists.txt;0;")
subdirs("gtest")
