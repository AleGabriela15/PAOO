# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ale/T1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ale/T1/build

# Include any dependencies generated for this target.
include CMakeFiles/pizza.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pizza.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pizza.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pizza.dir/flags.make

CMakeFiles/pizza.dir/src/pizza.cpp.o: CMakeFiles/pizza.dir/flags.make
CMakeFiles/pizza.dir/src/pizza.cpp.o: ../src/pizza.cpp
CMakeFiles/pizza.dir/src/pizza.cpp.o: CMakeFiles/pizza.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ale/T1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pizza.dir/src/pizza.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pizza.dir/src/pizza.cpp.o -MF CMakeFiles/pizza.dir/src/pizza.cpp.o.d -o CMakeFiles/pizza.dir/src/pizza.cpp.o -c /home/ale/T1/src/pizza.cpp

CMakeFiles/pizza.dir/src/pizza.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pizza.dir/src/pizza.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ale/T1/src/pizza.cpp > CMakeFiles/pizza.dir/src/pizza.cpp.i

CMakeFiles/pizza.dir/src/pizza.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pizza.dir/src/pizza.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ale/T1/src/pizza.cpp -o CMakeFiles/pizza.dir/src/pizza.cpp.s

# Object files for target pizza
pizza_OBJECTS = \
"CMakeFiles/pizza.dir/src/pizza.cpp.o"

# External object files for target pizza
pizza_EXTERNAL_OBJECTS =

pizza: CMakeFiles/pizza.dir/src/pizza.cpp.o
pizza: CMakeFiles/pizza.dir/build.make
pizza: CMakeFiles/pizza.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ale/T1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pizza"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pizza.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pizza.dir/build: pizza
.PHONY : CMakeFiles/pizza.dir/build

CMakeFiles/pizza.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pizza.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pizza.dir/clean

CMakeFiles/pizza.dir/depend:
	cd /home/ale/T1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ale/T1 /home/ale/T1 /home/ale/T1/build /home/ale/T1/build /home/ale/T1/build/CMakeFiles/pizza.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pizza.dir/depend

