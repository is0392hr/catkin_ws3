# Install script for directory: /home/koki/ros_catkin_ws/src/stage/assets

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/koki/ros_catkin_ws/install_isolated")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RELEASE")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stage/assets" TYPE FILE FILES
    "/home/koki/ros_catkin_ws/src/stage/assets/blue.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/death.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/green.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/logo.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/mains.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/mainspower.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/question_mark.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/red.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/stagelogo.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/stall-old.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/stall.png"
    "/home/koki/ros_catkin_ws/src/stage/assets/rgb.txt"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stage" TYPE FILE FILES "/home/koki/ros_catkin_ws/src/stage/assets/rgb.txt")
endif()

