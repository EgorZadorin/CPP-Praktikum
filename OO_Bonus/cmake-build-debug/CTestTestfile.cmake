# CMake generated Testfile for 
# Source directory: C:/Users/ailia/Documents/GitHub/CPPP/OO_Bonus
# Build directory: C:/Users/ailia/Documents/GitHub/CPPP/OO_Bonus/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests "env" "CTEST_OUTPUT_ON_FAILURE=1" "./tests")
set_tests_properties(tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/ailia/Documents/GitHub/CPPP/OO_Bonus/CMakeLists.txt;51;add_test;C:/Users/ailia/Documents/GitHub/CPPP/OO_Bonus/CMakeLists.txt;0;")
subdirs("_deps/catch2-build")
