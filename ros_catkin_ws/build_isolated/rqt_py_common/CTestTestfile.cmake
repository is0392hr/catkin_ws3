# CMake generated Testfile for 
# Source directory: /home/koki/ros_catkin_ws/src/rqt/rqt_py_common
# Build directory: /home/koki/ros_catkin_ws/build_isolated/rqt_py_common
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rqt_py_common_nosetests_test "/home/koki/ros_catkin_ws/build_isolated/rqt_py_common/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/koki/ros_catkin_ws/build_isolated/rqt_py_common/test_results/rqt_py_common/nosetests-test.xml" "--return-code" "\"/home/koki/.local/lib/python3.6/site-packages/cmake/data/bin/cmake\" -E make_directory /home/koki/ros_catkin_ws/build_isolated/rqt_py_common/test_results/rqt_py_common" "/usr/bin/nosetests3 -P --process-timeout=60 --where=/home/koki/ros_catkin_ws/src/rqt/rqt_py_common/test --with-xunit --xunit-file=/home/koki/ros_catkin_ws/build_isolated/rqt_py_common/test_results/rqt_py_common/nosetests-test.xml")
set_tests_properties(_ctest_rqt_py_common_nosetests_test PROPERTIES  _BACKTRACE_TRIPLES "/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/tests.cmake;160;add_test;/home/koki/ros_catkin_ws/install_isolated/share/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/koki/ros_catkin_ws/src/rqt/rqt_py_common/CMakeLists.txt;25;catkin_add_nosetests;/home/koki/ros_catkin_ws/src/rqt/rqt_py_common/CMakeLists.txt;0;")
subdirs("gtest")
