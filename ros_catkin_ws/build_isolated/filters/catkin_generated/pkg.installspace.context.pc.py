# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roslib;roscpp;rosconsole;pluginlib".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmean;-lparams;-lincrement;-lmedian;-ltransfer_function".split(';') if "-lmean;-lparams;-lincrement;-lmedian;-ltransfer_function" != "" else []
PROJECT_NAME = "filters"
PROJECT_SPACE_DIR = "/home/koki/ros_catkin_ws/install_isolated"
PROJECT_VERSION = "1.8.1"
