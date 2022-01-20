cmake_minimum_required(VERSION 3.5)

project(05.homework)

set(SOURCE src/statistics.cpp src/Min.cpp src/Max.cpp src/Mean.cpp src/Stdev.cpp)
set(HEADERS include/IStatistics.hpp include/Min.hpp include/Max.hpp include/Mean.hpp include/Stdev.hpp)

add_executable(statistics ${SOURCE} ${HEADERS})
target_include_directories(statistics PRIVATE include)

set_target_properties(statistics PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
