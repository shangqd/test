cmake_minimum_required(VERSION 2.8.3)
project(Bigbang LANGUAGES CXX)
project(boost_test)
set(CMAKE_CXX_STANDARD 11)
find_package(Boost REQUIRED COMPONENTS system thread log)
 
#add_definitions(-DBOOST_LOG_DYN_LINK)
add_definitions(-DBOOST_ALL_DYN_LINK)

include_directories(${Boost_INCLUDE_DIRS})
add_executable(boost_test boost_test.cpp)
target_link_libraries(boost_test pthread ${Boost_LIBRARIES})
#message(${Boost_LIBRARIES})