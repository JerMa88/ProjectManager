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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zma/VSCPrograms/fun/ProjectManager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zma/VSCPrograms/fun/ProjectManager/build

# Include any dependencies generated for this target.
include CMakeFiles/PojectManager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PojectManager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PojectManager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PojectManager.dir/flags.make

CMakeFiles/PojectManager.dir/main.cpp.o: CMakeFiles/PojectManager.dir/flags.make
CMakeFiles/PojectManager.dir/main.cpp.o: /Users/zma/VSCPrograms/fun/ProjectManager/main.cpp
CMakeFiles/PojectManager.dir/main.cpp.o: CMakeFiles/PojectManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zma/VSCPrograms/fun/ProjectManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PojectManager.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PojectManager.dir/main.cpp.o -MF CMakeFiles/PojectManager.dir/main.cpp.o.d -o CMakeFiles/PojectManager.dir/main.cpp.o -c /Users/zma/VSCPrograms/fun/ProjectManager/main.cpp

CMakeFiles/PojectManager.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PojectManager.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zma/VSCPrograms/fun/ProjectManager/main.cpp > CMakeFiles/PojectManager.dir/main.cpp.i

CMakeFiles/PojectManager.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PojectManager.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zma/VSCPrograms/fun/ProjectManager/main.cpp -o CMakeFiles/PojectManager.dir/main.cpp.s

# Object files for target PojectManager
PojectManager_OBJECTS = \
"CMakeFiles/PojectManager.dir/main.cpp.o"

# External object files for target PojectManager
PojectManager_EXTERNAL_OBJECTS =

PojectManager: CMakeFiles/PojectManager.dir/main.cpp.o
PojectManager: CMakeFiles/PojectManager.dir/build.make
PojectManager: CMakeFiles/PojectManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zma/VSCPrograms/fun/ProjectManager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PojectManager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PojectManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PojectManager.dir/build: PojectManager
.PHONY : CMakeFiles/PojectManager.dir/build

CMakeFiles/PojectManager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PojectManager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PojectManager.dir/clean

CMakeFiles/PojectManager.dir/depend:
	cd /Users/zma/VSCPrograms/fun/ProjectManager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zma/VSCPrograms/fun/ProjectManager /Users/zma/VSCPrograms/fun/ProjectManager /Users/zma/VSCPrograms/fun/ProjectManager/build /Users/zma/VSCPrograms/fun/ProjectManager/build /Users/zma/VSCPrograms/fun/ProjectManager/build/CMakeFiles/PojectManager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PojectManager.dir/depend
