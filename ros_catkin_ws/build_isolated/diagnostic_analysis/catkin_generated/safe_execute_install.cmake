execute_process(COMMAND "/home/koki/ros_catkin_ws/build_isolated/diagnostic_analysis/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/koki/ros_catkin_ws/build_isolated/diagnostic_analysis/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
