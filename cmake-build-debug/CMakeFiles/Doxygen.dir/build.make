# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\maysa\CLionProjects\projetoAED

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\maysa\CLionProjects\projetoAED\cmake-build-debug

# Utility rule file for Doxygen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Doxygen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Doxygen.dir/progress.make

CMakeFiles/Doxygen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\maysa\CLionProjects\projetoAED\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating API documentation with Doxygen"
	"C:\Program Files\doxygen\bin\doxygen.exe" C:/Users/maysa/CLionProjects/projetoAED/cmake-build-debug/Doxyfile

Doxygen: CMakeFiles/Doxygen
Doxygen: CMakeFiles/Doxygen.dir/build.make
.PHONY : Doxygen

# Rule to build all files generated by this target.
CMakeFiles/Doxygen.dir/build: Doxygen
.PHONY : CMakeFiles/Doxygen.dir/build

CMakeFiles/Doxygen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Doxygen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Doxygen.dir/clean

CMakeFiles/Doxygen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\maysa\CLionProjects\projetoAED C:\Users\maysa\CLionProjects\projetoAED C:\Users\maysa\CLionProjects\projetoAED\cmake-build-debug C:\Users\maysa\CLionProjects\projetoAED\cmake-build-debug C:\Users\maysa\CLionProjects\projetoAED\cmake-build-debug\CMakeFiles\Doxygen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Doxygen.dir/depend

