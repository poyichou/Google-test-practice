cmake_minimum_required(VERSION 2.6)
project(basic_test)

################################
# GTest
################################
ADD_SUBDIRECTORY (googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Add test cpp file
add_executable( facUnitTests factorial.cc factorial_unittest.cc )
# Link test executable against gtest & gtest_main
target_link_libraries(facUnitTests gtest gtest_main)
add_test( facUnitTests facUnitTests ) # For excuting ctest

add_executable( addUnitTests add.cc add_unittest.cc )
# Link test executable against gtest & gtest_main
target_link_libraries(addUnitTests gtest gtest_main)
add_test( addUnitTests addUnitTests ) # For excuting ctest
