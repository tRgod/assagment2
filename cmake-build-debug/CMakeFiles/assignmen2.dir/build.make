# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/thor/Hentet/CLion-2018.2.4/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/thor/Hentet/CLion-2018.2.4/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thor/assagment2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thor/assagment2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/assignmen2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assignmen2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignmen2.dir/flags.make

CMakeFiles/assignmen2.dir/main.cpp.o: CMakeFiles/assignmen2.dir/flags.make
CMakeFiles/assignmen2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thor/assagment2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assignmen2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignmen2.dir/main.cpp.o -c /home/thor/assagment2/main.cpp

CMakeFiles/assignmen2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignmen2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thor/assagment2/main.cpp > CMakeFiles/assignmen2.dir/main.cpp.i

CMakeFiles/assignmen2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignmen2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thor/assagment2/main.cpp -o CMakeFiles/assignmen2.dir/main.cpp.s

CMakeFiles/assignmen2.dir/BinaryHeap.cpp.o: CMakeFiles/assignmen2.dir/flags.make
CMakeFiles/assignmen2.dir/BinaryHeap.cpp.o: ../BinaryHeap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thor/assagment2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/assignmen2.dir/BinaryHeap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignmen2.dir/BinaryHeap.cpp.o -c /home/thor/assagment2/BinaryHeap.cpp

CMakeFiles/assignmen2.dir/BinaryHeap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignmen2.dir/BinaryHeap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thor/assagment2/BinaryHeap.cpp > CMakeFiles/assignmen2.dir/BinaryHeap.cpp.i

CMakeFiles/assignmen2.dir/BinaryHeap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignmen2.dir/BinaryHeap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thor/assagment2/BinaryHeap.cpp -o CMakeFiles/assignmen2.dir/BinaryHeap.cpp.s

# Object files for target assignmen2
assignmen2_OBJECTS = \
"CMakeFiles/assignmen2.dir/main.cpp.o" \
"CMakeFiles/assignmen2.dir/BinaryHeap.cpp.o"

# External object files for target assignmen2
assignmen2_EXTERNAL_OBJECTS =

assignmen2: CMakeFiles/assignmen2.dir/main.cpp.o
assignmen2: CMakeFiles/assignmen2.dir/BinaryHeap.cpp.o
assignmen2: CMakeFiles/assignmen2.dir/build.make
assignmen2: CMakeFiles/assignmen2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thor/assagment2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable assignmen2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignmen2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignmen2.dir/build: assignmen2

.PHONY : CMakeFiles/assignmen2.dir/build

CMakeFiles/assignmen2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assignmen2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assignmen2.dir/clean

CMakeFiles/assignmen2.dir/depend:
	cd /home/thor/assagment2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thor/assagment2 /home/thor/assagment2 /home/thor/assagment2/cmake-build-debug /home/thor/assagment2/cmake-build-debug /home/thor/assagment2/cmake-build-debug/CMakeFiles/assignmen2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assignmen2.dir/depend

