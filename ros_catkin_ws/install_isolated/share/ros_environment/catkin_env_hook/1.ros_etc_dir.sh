# generated from ros_environment/env-hooks/1.ros_etc_dir.sh.em

# env variable in installspace
if [ -z "$CATKIN_ENV_HOOK_WORKSPACE" ]; then
  CATKIN_ENV_HOOK_WORKSPACE="/home/koki/ros_catkin_ws/install_isolated"
fi
export ROS_ETC_DIR="$CATKIN_ENV_HOOK_WORKSPACE/etc/ros"
