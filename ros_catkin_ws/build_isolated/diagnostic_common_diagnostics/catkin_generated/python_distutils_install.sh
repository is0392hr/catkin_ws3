#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/koki/ros_catkin_ws/src/diagnostics/diagnostic_common_diagnostics"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/koki/ros_catkin_ws/install_isolated/lib/python3/dist-packages:/home/koki/ros_catkin_ws/build_isolated/diagnostic_common_diagnostics/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/koki/ros_catkin_ws/build_isolated/diagnostic_common_diagnostics" \
    "/usr/bin/python3" \
    "/home/koki/ros_catkin_ws/src/diagnostics/diagnostic_common_diagnostics/setup.py" \
     \
    build --build-base "/home/koki/ros_catkin_ws/build_isolated/diagnostic_common_diagnostics" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/koki/ros_catkin_ws/install_isolated" --install-scripts="/home/koki/ros_catkin_ws/install_isolated/bin"
