# CMake generated Testfile for 
# Source directory: C:/Users/ailia/Documents/GitHub/CPPP/04_advanced
# Build directory: C:/Users/ailia/Documents/GitHub/CPPP/04_advanced/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests "env" "CTEST_OUTPUT_ON_FAILURE=1" "./tests")
set_tests_properties(tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ailia/Documents/GitHub/CPPP/04_advanced/CMakeLists.txt;43;add_test;C:/Users/ailia/Documents/GitHub/CPPP/04_advanced/CMakeLists.txt;0;")
subdirs("_deps/catch2-build")
