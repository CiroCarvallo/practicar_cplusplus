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
CMAKE_SOURCE_DIR = /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos

# Include any dependencies generated for this target.
include CMakeFiles/ej2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ej2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej2.dir/flags.make

CMakeFiles/ej2.dir/tests/test_fecha.cpp.o: CMakeFiles/ej2.dir/flags.make
CMakeFiles/ej2.dir/tests/test_fecha.cpp.o: tests/test_fecha.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej2.dir/tests/test_fecha.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ej2.dir/tests/test_fecha.cpp.o -c /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos/tests/test_fecha.cpp

CMakeFiles/ej2.dir/tests/test_fecha.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej2.dir/tests/test_fecha.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos/tests/test_fecha.cpp > CMakeFiles/ej2.dir/tests/test_fecha.cpp.i

CMakeFiles/ej2.dir/tests/test_fecha.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej2.dir/tests/test_fecha.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos/tests/test_fecha.cpp -o CMakeFiles/ej2.dir/tests/test_fecha.cpp.s

CMakeFiles/ej2.dir/tests/test_fecha.cpp.o.requires:

.PHONY : CMakeFiles/ej2.dir/tests/test_fecha.cpp.o.requires

CMakeFiles/ej2.dir/tests/test_fecha.cpp.o.provides: CMakeFiles/ej2.dir/tests/test_fecha.cpp.o.requires
	$(MAKE) -f CMakeFiles/ej2.dir/build.make CMakeFiles/ej2.dir/tests/test_fecha.cpp.o.provides.build
.PHONY : CMakeFiles/ej2.dir/tests/test_fecha.cpp.o.provides

CMakeFiles/ej2.dir/tests/test_fecha.cpp.o.provides.build: CMakeFiles/ej2.dir/tests/test_fecha.cpp.o


# Object files for target ej2
ej2_OBJECTS = \
"CMakeFiles/ej2.dir/tests/test_fecha.cpp.o"

# External object files for target ej2
ej2_EXTERNAL_OBJECTS =

ej2: CMakeFiles/ej2.dir/tests/test_fecha.cpp.o
ej2: CMakeFiles/ej2.dir/build.make
ej2: tests/google-test/libgtest.a
ej2: tests/google-test/libgtest_main.a
ej2: tests/google-test/libgtest.a
ej2: CMakeFiles/ej2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ej2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ej2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej2.dir/build: ej2

.PHONY : CMakeFiles/ej2.dir/build

CMakeFiles/ej2.dir/requires: CMakeFiles/ej2.dir/tests/test_fecha.cpp.o.requires

.PHONY : CMakeFiles/ej2.dir/requires

CMakeFiles/ej2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ej2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ej2.dir/clean

CMakeFiles/ej2.dir/depend:
	cd /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos /home/miriam/Escritorio/algo2/ejercicio1/ejercitacion_clases/alumnos/CMakeFiles/ej2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ej2.dir/depend

