# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vlzqz/school/AVelazquez-project7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vlzqz/school/AVelazquez-project7/build

# Include any dependencies generated for this target.
include CMakeFiles/project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project.dir/flags.make

CMakeFiles/project.dir/sources/Main.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/sources/Main.cpp.o: /Users/vlzqz/school/AVelazquez-project7/sources/Main.cpp
CMakeFiles/project.dir/sources/Main.cpp.o: CMakeFiles/project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vlzqz/school/AVelazquez-project7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project.dir/sources/Main.cpp.o"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project.dir/sources/Main.cpp.o -MF CMakeFiles/project.dir/sources/Main.cpp.o.d -o CMakeFiles/project.dir/sources/Main.cpp.o -c /Users/vlzqz/school/AVelazquez-project7/sources/Main.cpp

CMakeFiles/project.dir/sources/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/sources/Main.cpp.i"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vlzqz/school/AVelazquez-project7/sources/Main.cpp > CMakeFiles/project.dir/sources/Main.cpp.i

CMakeFiles/project.dir/sources/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/sources/Main.cpp.s"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vlzqz/school/AVelazquez-project7/sources/Main.cpp -o CMakeFiles/project.dir/sources/Main.cpp.s

CMakeFiles/project.dir/sources/Hash.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/sources/Hash.cpp.o: /Users/vlzqz/school/AVelazquez-project7/sources/Hash.cpp
CMakeFiles/project.dir/sources/Hash.cpp.o: CMakeFiles/project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vlzqz/school/AVelazquez-project7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project.dir/sources/Hash.cpp.o"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project.dir/sources/Hash.cpp.o -MF CMakeFiles/project.dir/sources/Hash.cpp.o.d -o CMakeFiles/project.dir/sources/Hash.cpp.o -c /Users/vlzqz/school/AVelazquez-project7/sources/Hash.cpp

CMakeFiles/project.dir/sources/Hash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/sources/Hash.cpp.i"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vlzqz/school/AVelazquez-project7/sources/Hash.cpp > CMakeFiles/project.dir/sources/Hash.cpp.i

CMakeFiles/project.dir/sources/Hash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/sources/Hash.cpp.s"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vlzqz/school/AVelazquez-project7/sources/Hash.cpp -o CMakeFiles/project.dir/sources/Hash.cpp.s

# Object files for target project
project_OBJECTS = \
"CMakeFiles/project.dir/sources/Main.cpp.o" \
"CMakeFiles/project.dir/sources/Hash.cpp.o"

# External object files for target project
project_EXTERNAL_OBJECTS =

project: CMakeFiles/project.dir/sources/Main.cpp.o
project: CMakeFiles/project.dir/sources/Hash.cpp.o
project: CMakeFiles/project.dir/build.make
project: CMakeFiles/project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vlzqz/school/AVelazquez-project7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project.dir/build: project
.PHONY : CMakeFiles/project.dir/build

CMakeFiles/project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project.dir/clean

CMakeFiles/project.dir/depend:
	cd /Users/vlzqz/school/AVelazquez-project7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vlzqz/school/AVelazquez-project7 /Users/vlzqz/school/AVelazquez-project7 /Users/vlzqz/school/AVelazquez-project7/build /Users/vlzqz/school/AVelazquez-project7/build /Users/vlzqz/school/AVelazquez-project7/build/CMakeFiles/project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project.dir/depend

