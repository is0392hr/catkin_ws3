# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/koki/.local/lib/python3.6/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/koki/.local/lib/python3.6/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/koki/ros_catkin_ws/src/ros_comm/xmlrpcpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp

# Include any dependencies generated for this target.
include test/CMakeFiles/mock_socket.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/mock_socket.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/mock_socket.dir/flags.make

test/CMakeFiles/mock_socket.dir/mock_socket.cpp.o: test/CMakeFiles/mock_socket.dir/flags.make
test/CMakeFiles/mock_socket.dir/mock_socket.cpp.o: /home/koki/ros_catkin_ws/src/ros_comm/xmlrpcpp/test/mock_socket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/mock_socket.dir/mock_socket.cpp.o"
	cd /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mock_socket.dir/mock_socket.cpp.o -c /home/koki/ros_catkin_ws/src/ros_comm/xmlrpcpp/test/mock_socket.cpp

test/CMakeFiles/mock_socket.dir/mock_socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mock_socket.dir/mock_socket.cpp.i"
	cd /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/koki/ros_catkin_ws/src/ros_comm/xmlrpcpp/test/mock_socket.cpp > CMakeFiles/mock_socket.dir/mock_socket.cpp.i

test/CMakeFiles/mock_socket.dir/mock_socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mock_socket.dir/mock_socket.cpp.s"
	cd /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/koki/ros_catkin_ws/src/ros_comm/xmlrpcpp/test/mock_socket.cpp -o CMakeFiles/mock_socket.dir/mock_socket.cpp.s

# Object files for target mock_socket
mock_socket_OBJECTS = \
"CMakeFiles/mock_socket.dir/mock_socket.cpp.o"

# External object files for target mock_socket
mock_socket_EXTERNAL_OBJECTS =

/home/koki/ros_catkin_ws/devel_isolated/xmlrpcpp/lib/libmock_socket.so: test/CMakeFiles/mock_socket.dir/mock_socket.cpp.o
/home/koki/ros_catkin_ws/devel_isolated/xmlrpcpp/lib/libmock_socket.so: test/CMakeFiles/mock_socket.dir/build.make
/home/koki/ros_catkin_ws/devel_isolated/xmlrpcpp/lib/libmock_socket.so: gtest/googlemock/gtest/libgtest.so
/home/koki/ros_catkin_ws/devel_isolated/xmlrpcpp/lib/libmock_socket.so: test/CMakeFiles/mock_socket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/koki/ros_catkin_ws/devel_isolated/xmlrpcpp/lib/libmock_socket.so"
	cd /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mock_socket.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/mock_socket.dir/build: /home/koki/ros_catkin_ws/devel_isolated/xmlrpcpp/lib/libmock_socket.so

.PHONY : test/CMakeFiles/mock_socket.dir/build

test/CMakeFiles/mock_socket.dir/clean:
	cd /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/test && $(CMAKE_COMMAND) -P CMakeFiles/mock_socket.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/mock_socket.dir/clean

test/CMakeFiles/mock_socket.dir/depend:
	cd /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/koki/ros_catkin_ws/src/ros_comm/xmlrpcpp /home/koki/ros_catkin_ws/src/ros_comm/xmlrpcpp/test /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/test /home/koki/ros_catkin_ws/build_isolated/xmlrpcpp/test/CMakeFiles/mock_socket.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/mock_socket.dir/depend

