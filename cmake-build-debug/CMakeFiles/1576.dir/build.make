# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/CLionProjects/wow

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/CLionProjects/wow/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1576.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1576.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1576.dir/flags.make

CMakeFiles/1576.dir/1576.cpp.o: CMakeFiles/1576.dir/flags.make
CMakeFiles/1576.dir/1576.cpp.o: ../1576.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/CLionProjects/wow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1576.dir/1576.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1576.dir/1576.cpp.o -c /home/ubuntu/CLionProjects/wow/1576.cpp

CMakeFiles/1576.dir/1576.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1576.dir/1576.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/CLionProjects/wow/1576.cpp > CMakeFiles/1576.dir/1576.cpp.i

CMakeFiles/1576.dir/1576.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1576.dir/1576.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/CLionProjects/wow/1576.cpp -o CMakeFiles/1576.dir/1576.cpp.s

# Object files for target 1576
1576_OBJECTS = \
"CMakeFiles/1576.dir/1576.cpp.o"

# External object files for target 1576
1576_EXTERNAL_OBJECTS =

1576: CMakeFiles/1576.dir/1576.cpp.o
1576: CMakeFiles/1576.dir/build.make
1576: CMakeFiles/1576.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/CLionProjects/wow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1576"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1576.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1576.dir/build: 1576

.PHONY : CMakeFiles/1576.dir/build

CMakeFiles/1576.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1576.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1576.dir/clean

CMakeFiles/1576.dir/depend:
	cd /home/ubuntu/CLionProjects/wow/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/CLionProjects/wow /home/ubuntu/CLionProjects/wow /home/ubuntu/CLionProjects/wow/cmake-build-debug /home/ubuntu/CLionProjects/wow/cmake-build-debug /home/ubuntu/CLionProjects/wow/cmake-build-debug/CMakeFiles/1576.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1576.dir/depend

