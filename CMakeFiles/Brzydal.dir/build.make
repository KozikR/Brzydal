# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/Brzydal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Brzydal

# Include any dependencies generated for this target.
include CMakeFiles/Brzydal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Brzydal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Brzydal.dir/flags.make

CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o: CMakeFiles/Brzydal.dir/flags.make
CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o: src/simpleFace.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/Brzydal/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o -c /root/Brzydal/src/simpleFace.cpp

CMakeFiles/Brzydal.dir/src/simpleFace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Brzydal.dir/src/simpleFace.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/Brzydal/src/simpleFace.cpp > CMakeFiles/Brzydal.dir/src/simpleFace.cpp.i

CMakeFiles/Brzydal.dir/src/simpleFace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Brzydal.dir/src/simpleFace.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/Brzydal/src/simpleFace.cpp -o CMakeFiles/Brzydal.dir/src/simpleFace.cpp.s

CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o.requires:
.PHONY : CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o.requires

CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o.provides: CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o.requires
	$(MAKE) -f CMakeFiles/Brzydal.dir/build.make CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o.provides.build
.PHONY : CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o.provides

CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o.provides.build: CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o

CMakeFiles/Brzydal.dir/src/face.cpp.o: CMakeFiles/Brzydal.dir/flags.make
CMakeFiles/Brzydal.dir/src/face.cpp.o: src/face.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/Brzydal/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Brzydal.dir/src/face.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Brzydal.dir/src/face.cpp.o -c /root/Brzydal/src/face.cpp

CMakeFiles/Brzydal.dir/src/face.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Brzydal.dir/src/face.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/Brzydal/src/face.cpp > CMakeFiles/Brzydal.dir/src/face.cpp.i

CMakeFiles/Brzydal.dir/src/face.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Brzydal.dir/src/face.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/Brzydal/src/face.cpp -o CMakeFiles/Brzydal.dir/src/face.cpp.s

CMakeFiles/Brzydal.dir/src/face.cpp.o.requires:
.PHONY : CMakeFiles/Brzydal.dir/src/face.cpp.o.requires

CMakeFiles/Brzydal.dir/src/face.cpp.o.provides: CMakeFiles/Brzydal.dir/src/face.cpp.o.requires
	$(MAKE) -f CMakeFiles/Brzydal.dir/build.make CMakeFiles/Brzydal.dir/src/face.cpp.o.provides.build
.PHONY : CMakeFiles/Brzydal.dir/src/face.cpp.o.provides

CMakeFiles/Brzydal.dir/src/face.cpp.o.provides.build: CMakeFiles/Brzydal.dir/src/face.cpp.o

CMakeFiles/Brzydal.dir/src/main.cpp.o: CMakeFiles/Brzydal.dir/flags.make
CMakeFiles/Brzydal.dir/src/main.cpp.o: src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/Brzydal/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Brzydal.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Brzydal.dir/src/main.cpp.o -c /root/Brzydal/src/main.cpp

CMakeFiles/Brzydal.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Brzydal.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/Brzydal/src/main.cpp > CMakeFiles/Brzydal.dir/src/main.cpp.i

CMakeFiles/Brzydal.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Brzydal.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/Brzydal/src/main.cpp -o CMakeFiles/Brzydal.dir/src/main.cpp.s

CMakeFiles/Brzydal.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/Brzydal.dir/src/main.cpp.o.requires

CMakeFiles/Brzydal.dir/src/main.cpp.o.provides: CMakeFiles/Brzydal.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Brzydal.dir/build.make CMakeFiles/Brzydal.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/Brzydal.dir/src/main.cpp.o.provides

CMakeFiles/Brzydal.dir/src/main.cpp.o.provides.build: CMakeFiles/Brzydal.dir/src/main.cpp.o

CMakeFiles/Brzydal.dir/src/servo.cpp.o: CMakeFiles/Brzydal.dir/flags.make
CMakeFiles/Brzydal.dir/src/servo.cpp.o: src/servo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/Brzydal/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Brzydal.dir/src/servo.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Brzydal.dir/src/servo.cpp.o -c /root/Brzydal/src/servo.cpp

CMakeFiles/Brzydal.dir/src/servo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Brzydal.dir/src/servo.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/Brzydal/src/servo.cpp > CMakeFiles/Brzydal.dir/src/servo.cpp.i

CMakeFiles/Brzydal.dir/src/servo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Brzydal.dir/src/servo.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/Brzydal/src/servo.cpp -o CMakeFiles/Brzydal.dir/src/servo.cpp.s

CMakeFiles/Brzydal.dir/src/servo.cpp.o.requires:
.PHONY : CMakeFiles/Brzydal.dir/src/servo.cpp.o.requires

CMakeFiles/Brzydal.dir/src/servo.cpp.o.provides: CMakeFiles/Brzydal.dir/src/servo.cpp.o.requires
	$(MAKE) -f CMakeFiles/Brzydal.dir/build.make CMakeFiles/Brzydal.dir/src/servo.cpp.o.provides.build
.PHONY : CMakeFiles/Brzydal.dir/src/servo.cpp.o.provides

CMakeFiles/Brzydal.dir/src/servo.cpp.o.provides.build: CMakeFiles/Brzydal.dir/src/servo.cpp.o

CMakeFiles/Brzydal.dir/src/imageFace.cpp.o: CMakeFiles/Brzydal.dir/flags.make
CMakeFiles/Brzydal.dir/src/imageFace.cpp.o: src/imageFace.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/Brzydal/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Brzydal.dir/src/imageFace.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Brzydal.dir/src/imageFace.cpp.o -c /root/Brzydal/src/imageFace.cpp

CMakeFiles/Brzydal.dir/src/imageFace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Brzydal.dir/src/imageFace.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/Brzydal/src/imageFace.cpp > CMakeFiles/Brzydal.dir/src/imageFace.cpp.i

CMakeFiles/Brzydal.dir/src/imageFace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Brzydal.dir/src/imageFace.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/Brzydal/src/imageFace.cpp -o CMakeFiles/Brzydal.dir/src/imageFace.cpp.s

CMakeFiles/Brzydal.dir/src/imageFace.cpp.o.requires:
.PHONY : CMakeFiles/Brzydal.dir/src/imageFace.cpp.o.requires

CMakeFiles/Brzydal.dir/src/imageFace.cpp.o.provides: CMakeFiles/Brzydal.dir/src/imageFace.cpp.o.requires
	$(MAKE) -f CMakeFiles/Brzydal.dir/build.make CMakeFiles/Brzydal.dir/src/imageFace.cpp.o.provides.build
.PHONY : CMakeFiles/Brzydal.dir/src/imageFace.cpp.o.provides

CMakeFiles/Brzydal.dir/src/imageFace.cpp.o.provides.build: CMakeFiles/Brzydal.dir/src/imageFace.cpp.o

# Object files for target Brzydal
Brzydal_OBJECTS = \
"CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o" \
"CMakeFiles/Brzydal.dir/src/face.cpp.o" \
"CMakeFiles/Brzydal.dir/src/main.cpp.o" \
"CMakeFiles/Brzydal.dir/src/servo.cpp.o" \
"CMakeFiles/Brzydal.dir/src/imageFace.cpp.o"

# External object files for target Brzydal
Brzydal_EXTERNAL_OBJECTS =

Brzydal: CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o
Brzydal: CMakeFiles/Brzydal.dir/src/face.cpp.o
Brzydal: CMakeFiles/Brzydal.dir/src/main.cpp.o
Brzydal: CMakeFiles/Brzydal.dir/src/servo.cpp.o
Brzydal: CMakeFiles/Brzydal.dir/src/imageFace.cpp.o
Brzydal: /usr/local/lib/libopencv_videostab.so.3.1.0
Brzydal: /usr/local/lib/libopencv_videoio.so.3.1.0
Brzydal: /usr/local/lib/libopencv_video.so.3.1.0
Brzydal: /usr/local/lib/libopencv_superres.so.3.1.0
Brzydal: /usr/local/lib/libopencv_stitching.so.3.1.0
Brzydal: /usr/local/lib/libopencv_shape.so.3.1.0
Brzydal: /usr/local/lib/libopencv_photo.so.3.1.0
Brzydal: /usr/local/lib/libopencv_objdetect.so.3.1.0
Brzydal: /usr/local/lib/libopencv_ml.so.3.1.0
Brzydal: /usr/local/lib/libopencv_imgproc.so.3.1.0
Brzydal: /usr/local/lib/libopencv_imgcodecs.so.3.1.0
Brzydal: /usr/local/lib/libopencv_highgui.so.3.1.0
Brzydal: /usr/local/lib/libopencv_flann.so.3.1.0
Brzydal: /usr/local/lib/libopencv_features2d.so.3.1.0
Brzydal: /usr/local/lib/libopencv_core.so.3.1.0
Brzydal: /usr/local/lib/libopencv_calib3d.so.3.1.0
Brzydal: /usr/local/lib/libopencv_features2d.so.3.1.0
Brzydal: /usr/local/lib/libopencv_ml.so.3.1.0
Brzydal: /usr/local/lib/libopencv_highgui.so.3.1.0
Brzydal: /usr/local/lib/libopencv_videoio.so.3.1.0
Brzydal: /usr/local/lib/libopencv_imgcodecs.so.3.1.0
Brzydal: /usr/local/lib/libopencv_flann.so.3.1.0
Brzydal: /usr/local/lib/libopencv_video.so.3.1.0
Brzydal: /usr/local/lib/libopencv_imgproc.so.3.1.0
Brzydal: /usr/local/lib/libopencv_core.so.3.1.0
Brzydal: CMakeFiles/Brzydal.dir/build.make
Brzydal: CMakeFiles/Brzydal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable Brzydal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Brzydal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Brzydal.dir/build: Brzydal
.PHONY : CMakeFiles/Brzydal.dir/build

CMakeFiles/Brzydal.dir/requires: CMakeFiles/Brzydal.dir/src/simpleFace.cpp.o.requires
CMakeFiles/Brzydal.dir/requires: CMakeFiles/Brzydal.dir/src/face.cpp.o.requires
CMakeFiles/Brzydal.dir/requires: CMakeFiles/Brzydal.dir/src/main.cpp.o.requires
CMakeFiles/Brzydal.dir/requires: CMakeFiles/Brzydal.dir/src/servo.cpp.o.requires
CMakeFiles/Brzydal.dir/requires: CMakeFiles/Brzydal.dir/src/imageFace.cpp.o.requires
.PHONY : CMakeFiles/Brzydal.dir/requires

CMakeFiles/Brzydal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Brzydal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Brzydal.dir/clean

CMakeFiles/Brzydal.dir/depend:
	cd /root/Brzydal && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Brzydal /root/Brzydal /root/Brzydal /root/Brzydal /root/Brzydal/CMakeFiles/Brzydal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Brzydal.dir/depend

