# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/youn/CLionstudy/middletest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/youn/CLionstudy/middletest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/middletest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/middletest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/middletest.dir/flags.make

CMakeFiles/middletest.dir/main.c.o: CMakeFiles/middletest.dir/flags.make
CMakeFiles/middletest.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/youn/CLionstudy/middletest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/middletest.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/middletest.dir/main.c.o   -c /Users/youn/CLionstudy/middletest/main.c

CMakeFiles/middletest.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/middletest.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/youn/CLionstudy/middletest/main.c > CMakeFiles/middletest.dir/main.c.i

CMakeFiles/middletest.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/middletest.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/youn/CLionstudy/middletest/main.c -o CMakeFiles/middletest.dir/main.c.s

CMakeFiles/middletest.dir/user.c.o: CMakeFiles/middletest.dir/flags.make
CMakeFiles/middletest.dir/user.c.o: ../user.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/youn/CLionstudy/middletest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/middletest.dir/user.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/middletest.dir/user.c.o   -c /Users/youn/CLionstudy/middletest/user.c

CMakeFiles/middletest.dir/user.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/middletest.dir/user.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/youn/CLionstudy/middletest/user.c > CMakeFiles/middletest.dir/user.c.i

CMakeFiles/middletest.dir/user.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/middletest.dir/user.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/youn/CLionstudy/middletest/user.c -o CMakeFiles/middletest.dir/user.c.s

CMakeFiles/middletest.dir/node.c.o: CMakeFiles/middletest.dir/flags.make
CMakeFiles/middletest.dir/node.c.o: ../node.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/youn/CLionstudy/middletest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/middletest.dir/node.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/middletest.dir/node.c.o   -c /Users/youn/CLionstudy/middletest/node.c

CMakeFiles/middletest.dir/node.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/middletest.dir/node.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/youn/CLionstudy/middletest/node.c > CMakeFiles/middletest.dir/node.c.i

CMakeFiles/middletest.dir/node.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/middletest.dir/node.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/youn/CLionstudy/middletest/node.c -o CMakeFiles/middletest.dir/node.c.s

CMakeFiles/middletest.dir/queue_list.c.o: CMakeFiles/middletest.dir/flags.make
CMakeFiles/middletest.dir/queue_list.c.o: ../queue_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/youn/CLionstudy/middletest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/middletest.dir/queue_list.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/middletest.dir/queue_list.c.o   -c /Users/youn/CLionstudy/middletest/queue_list.c

CMakeFiles/middletest.dir/queue_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/middletest.dir/queue_list.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/youn/CLionstudy/middletest/queue_list.c > CMakeFiles/middletest.dir/queue_list.c.i

CMakeFiles/middletest.dir/queue_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/middletest.dir/queue_list.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/youn/CLionstudy/middletest/queue_list.c -o CMakeFiles/middletest.dir/queue_list.c.s

CMakeFiles/middletest.dir/lank.c.o: CMakeFiles/middletest.dir/flags.make
CMakeFiles/middletest.dir/lank.c.o: ../lank.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/youn/CLionstudy/middletest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/middletest.dir/lank.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/middletest.dir/lank.c.o   -c /Users/youn/CLionstudy/middletest/lank.c

CMakeFiles/middletest.dir/lank.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/middletest.dir/lank.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/youn/CLionstudy/middletest/lank.c > CMakeFiles/middletest.dir/lank.c.i

CMakeFiles/middletest.dir/lank.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/middletest.dir/lank.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/youn/CLionstudy/middletest/lank.c -o CMakeFiles/middletest.dir/lank.c.s

CMakeFiles/middletest.dir/lankNode.c.o: CMakeFiles/middletest.dir/flags.make
CMakeFiles/middletest.dir/lankNode.c.o: ../lankNode.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/youn/CLionstudy/middletest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/middletest.dir/lankNode.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/middletest.dir/lankNode.c.o   -c /Users/youn/CLionstudy/middletest/lankNode.c

CMakeFiles/middletest.dir/lankNode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/middletest.dir/lankNode.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/youn/CLionstudy/middletest/lankNode.c > CMakeFiles/middletest.dir/lankNode.c.i

CMakeFiles/middletest.dir/lankNode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/middletest.dir/lankNode.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/youn/CLionstudy/middletest/lankNode.c -o CMakeFiles/middletest.dir/lankNode.c.s

# Object files for target middletest
middletest_OBJECTS = \
"CMakeFiles/middletest.dir/main.c.o" \
"CMakeFiles/middletest.dir/user.c.o" \
"CMakeFiles/middletest.dir/node.c.o" \
"CMakeFiles/middletest.dir/queue_list.c.o" \
"CMakeFiles/middletest.dir/lank.c.o" \
"CMakeFiles/middletest.dir/lankNode.c.o"

# External object files for target middletest
middletest_EXTERNAL_OBJECTS =

middletest: CMakeFiles/middletest.dir/main.c.o
middletest: CMakeFiles/middletest.dir/user.c.o
middletest: CMakeFiles/middletest.dir/node.c.o
middletest: CMakeFiles/middletest.dir/queue_list.c.o
middletest: CMakeFiles/middletest.dir/lank.c.o
middletest: CMakeFiles/middletest.dir/lankNode.c.o
middletest: CMakeFiles/middletest.dir/build.make
middletest: CMakeFiles/middletest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/youn/CLionstudy/middletest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable middletest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/middletest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/middletest.dir/build: middletest

.PHONY : CMakeFiles/middletest.dir/build

CMakeFiles/middletest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/middletest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/middletest.dir/clean

CMakeFiles/middletest.dir/depend:
	cd /Users/youn/CLionstudy/middletest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/youn/CLionstudy/middletest /Users/youn/CLionstudy/middletest /Users/youn/CLionstudy/middletest/cmake-build-debug /Users/youn/CLionstudy/middletest/cmake-build-debug /Users/youn/CLionstudy/middletest/cmake-build-debug/CMakeFiles/middletest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/middletest.dir/depend

