# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/elaa/anaconda2/bin/cmake

# The command to remove a file.
RM = /home/elaa/anaconda2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/build

# Include any dependencies generated for this target.
include CMakeFiles/factory2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/factory2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/factory2.dir/flags.make

CMakeFiles/factory2.dir/factory2.cpp.o: CMakeFiles/factory2.dir/flags.make
CMakeFiles/factory2.dir/factory2.cpp.o: ../factory2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/factory2.dir/factory2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/factory2.dir/factory2.cpp.o -c /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/factory2.cpp

CMakeFiles/factory2.dir/factory2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/factory2.dir/factory2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/factory2.cpp > CMakeFiles/factory2.dir/factory2.cpp.i

CMakeFiles/factory2.dir/factory2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/factory2.dir/factory2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/factory2.cpp -o CMakeFiles/factory2.dir/factory2.cpp.s

# Object files for target factory2
factory2_OBJECTS = \
"CMakeFiles/factory2.dir/factory2.cpp.o"

# External object files for target factory2
factory2_EXTERNAL_OBJECTS =

factory2: CMakeFiles/factory2.dir/factory2.cpp.o
factory2: CMakeFiles/factory2.dir/build.make
factory2: CMakeFiles/factory2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable factory2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/factory2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/factory2.dir/build: factory2

.PHONY : CMakeFiles/factory2.dir/build

CMakeFiles/factory2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/factory2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/factory2.dir/clean

CMakeFiles/factory2.dir/depend:
	cd /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/build /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/build /home/elaa/Desktop/OKUL/YTK/ödevler/odev3/c++_kodlar/build/CMakeFiles/factory2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/factory2.dir/depend

