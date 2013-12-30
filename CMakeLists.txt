project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

include_directories(../../Catch/include)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

set(sources 
   main.cpp 
   SoundexTest.cpp)
add_executable(test ${sources})
target_link_libraries(test pthread)

