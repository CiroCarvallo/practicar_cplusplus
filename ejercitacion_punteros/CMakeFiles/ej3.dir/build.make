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
CMAKE_SOURCE_DIR = /home/miriam/Escritorio/alg2/ejercitacion_punteros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/miriam/Escritorio/alg2/ejercitacion_punteros

# Include any dependencies generated for this target.
include CMakeFiles/ej3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ej3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej3.dir/flags.make

CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o: CMakeFiles/ej3.dir/flags.make
CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o: tests/mapa_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miriam/Escritorio/alg2/ejercitacion_punteros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o -c /home/miriam/Escritorio/alg2/ejercitacion_punteros/tests/mapa_tests.cpp

CMakeFiles/ej3.dir/tests/mapa_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej3.dir/tests/mapa_tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/miriam/Escritorio/alg2/ejercitacion_punteros/tests/mapa_tests.cpp > CMakeFiles/ej3.dir/tests/mapa_tests.cpp.i

CMakeFiles/ej3.dir/tests/mapa_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej3.dir/tests/mapa_tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/miriam/Escritorio/alg2/ejercitacion_punteros/tests/mapa_tests.cpp -o CMakeFiles/ej3.dir/tests/mapa_tests.cpp.s

CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o.requires:

.PHONY : CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o.requires

CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o.provides: CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o.requires
	$(MAKE) -f CMakeFiles/ej3.dir/build.make CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o.provides.build
.PHONY : CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o.provides

CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o.provides.build: CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o


# Object files for target ej3
ej3_OBJECTS = \
"CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o"

# External object files for target ej3
ej3_EXTERNAL_OBJECTS =

ej3: CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o
ej3: CMakeFiles/ej3.dir/build.make
ej3: tests/google-test/libgtest.a
ej3: tests/google-test/libgtest_main.a
ej3: tests/google-test/libgtest.a
ej3: CMakeFiles/ej3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/miriam/Escritorio/alg2/ejercitacion_punteros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ej3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ej3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej3.dir/build: ej3

.PHONY : CMakeFiles/ej3.dir/build

CMakeFiles/ej3.dir/requires: CMakeFiles/ej3.dir/tests/mapa_tests.cpp.o.requires

.PHONY : CMakeFiles/ej3.dir/requires

CMakeFiles/ej3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ej3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ej3.dir/clean

CMakeFiles/ej3.dir/depend:
	cd /home/miriam/Escritorio/alg2/ejercitacion_punteros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/miriam/Escritorio/alg2/ejercitacion_punteros /home/miriam/Escritorio/alg2/ejercitacion_punteros /home/miriam/Escritorio/alg2/ejercitacion_punteros /home/miriam/Escritorio/alg2/ejercitacion_punteros /home/miriam/Escritorio/alg2/ejercitacion_punteros/CMakeFiles/ej3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ej3.dir/depend
