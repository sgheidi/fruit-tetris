# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends"

# Include any dependencies generated for this target.
include deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/depend.make

# Include the progress variables for this target.
include deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/progress.make

# Include the compile flags for this target's objects.
include deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/flags.make

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/flags.make
deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o: deps/glfw-3.3.2/tests/joysticks.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o"
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/joysticks.dir/joysticks.c.o   -c "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests/joysticks.c"

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/joysticks.dir/joysticks.c.i"
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests/joysticks.c" > CMakeFiles/joysticks.dir/joysticks.c.i

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/joysticks.dir/joysticks.c.s"
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests/joysticks.c" -o CMakeFiles/joysticks.dir/joysticks.c.s

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o.requires:

.PHONY : deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o.requires

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o.provides: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o.requires
	$(MAKE) -f deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/build.make deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o.provides.build
.PHONY : deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o.provides

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o.provides.build: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o


deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/flags.make
deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o: deps/glfw-3.3.2/deps/glad_gl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o"
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o   -c "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/deps/glad_gl.c"

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/joysticks.dir/__/deps/glad_gl.c.i"
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/deps/glad_gl.c" > CMakeFiles/joysticks.dir/__/deps/glad_gl.c.i

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/joysticks.dir/__/deps/glad_gl.c.s"
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/deps/glad_gl.c" -o CMakeFiles/joysticks.dir/__/deps/glad_gl.c.s

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o.requires:

.PHONY : deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o.requires

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o.provides: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o.requires
	$(MAKE) -f deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/build.make deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o.provides.build
.PHONY : deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o.provides

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o.provides.build: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o


# Object files for target joysticks
joysticks_OBJECTS = \
"CMakeFiles/joysticks.dir/joysticks.c.o" \
"CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o"

# External object files for target joysticks
joysticks_EXTERNAL_OBJECTS =

deps/glfw-3.3.2/tests/joysticks: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o
deps/glfw-3.3.2/tests/joysticks: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o
deps/glfw-3.3.2/tests/joysticks: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/build.make
deps/glfw-3.3.2/tests/joysticks: deps/glfw-3.3.2/src/libglfw3.a
deps/glfw-3.3.2/tests/joysticks: /usr/lib/x86_64-linux-gnu/libm.so
deps/glfw-3.3.2/tests/joysticks: /usr/lib/x86_64-linux-gnu/librt.so
deps/glfw-3.3.2/tests/joysticks: /usr/lib/x86_64-linux-gnu/libm.so
deps/glfw-3.3.2/tests/joysticks: /usr/lib/x86_64-linux-gnu/libX11.so
deps/glfw-3.3.2/tests/joysticks: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable joysticks"
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/joysticks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/build: deps/glfw-3.3.2/tests/joysticks

.PHONY : deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/build

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/requires: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/joysticks.c.o.requires
deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/requires: deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/__/deps/glad_gl.c.o.requires

.PHONY : deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/requires

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/clean:
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" && $(CMAKE_COMMAND) -P CMakeFiles/joysticks.dir/cmake_clean.cmake
.PHONY : deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/clean

deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/depend:
	cd "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends" "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends" "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests" "/mnt/c/Users/Shervan Gheidi/Desktop/crnt/TetrisFriends/deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : deps/glfw-3.3.2/tests/CMakeFiles/joysticks.dir/depend

