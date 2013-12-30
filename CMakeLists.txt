project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

include_directories(../../Catch/include)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

set(sources
   main.cpp
   CharUtil.cpp
   StringUtil.cpp)
set(testSources
    CharUtilTest.cpp
    SoundexTest.cpp
    StringUtilTest.cpp)
add_executable(test ${testSources} ${sources})
target_link_libraries(test pthread)

