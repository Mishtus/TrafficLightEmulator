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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.12.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.12.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/morheit/Documents/TrafficLightEmulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/morheit/Documents/TrafficLightEmulator

# Include any dependencies generated for this target.
include TrafficLightFSM/CMakeFiles/TLFSM.dir/depend.make

# Include the progress variables for this target.
include TrafficLightFSM/CMakeFiles/TLFSM.dir/progress.make

# Include the compile flags for this target's objects.
include TrafficLightFSM/CMakeFiles/TLFSM.dir/flags.make

TrafficLightFSM/CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.o: TrafficLightFSM/CMakeFiles/TLFSM.dir/flags.make
TrafficLightFSM/CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.o: TrafficLightFSM/src/TrafficLightFSM.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/morheit/Documents/TrafficLightEmulator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TrafficLightFSM/CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.o"
	cd /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.o -c /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM/src/TrafficLightFSM.cpp

TrafficLightFSM/CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.i"
	cd /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM/src/TrafficLightFSM.cpp > CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.i

TrafficLightFSM/CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.s"
	cd /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM/src/TrafficLightFSM.cpp -o CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.s

# Object files for target TLFSM
TLFSM_OBJECTS = \
"CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.o"

# External object files for target TLFSM
TLFSM_EXTERNAL_OBJECTS =

TrafficLightFSM/libTLFSM.a: TrafficLightFSM/CMakeFiles/TLFSM.dir/src/TrafficLightFSM.cpp.o
TrafficLightFSM/libTLFSM.a: TrafficLightFSM/CMakeFiles/TLFSM.dir/build.make
TrafficLightFSM/libTLFSM.a: TrafficLightFSM/CMakeFiles/TLFSM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/morheit/Documents/TrafficLightEmulator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libTLFSM.a"
	cd /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM && $(CMAKE_COMMAND) -P CMakeFiles/TLFSM.dir/cmake_clean_target.cmake
	cd /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TLFSM.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TrafficLightFSM/CMakeFiles/TLFSM.dir/build: TrafficLightFSM/libTLFSM.a

.PHONY : TrafficLightFSM/CMakeFiles/TLFSM.dir/build

TrafficLightFSM/CMakeFiles/TLFSM.dir/clean:
	cd /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM && $(CMAKE_COMMAND) -P CMakeFiles/TLFSM.dir/cmake_clean.cmake
.PHONY : TrafficLightFSM/CMakeFiles/TLFSM.dir/clean

TrafficLightFSM/CMakeFiles/TLFSM.dir/depend:
	cd /Users/morheit/Documents/TrafficLightEmulator && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/morheit/Documents/TrafficLightEmulator /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM /Users/morheit/Documents/TrafficLightEmulator /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM /Users/morheit/Documents/TrafficLightEmulator/TrafficLightFSM/CMakeFiles/TLFSM.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : TrafficLightFSM/CMakeFiles/TLFSM.dir/depend
