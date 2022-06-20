cmake_minimum_required(VERSION 3.10)

project(learning_cpp)

set(CMAKE_CXX_STANDARD 17)

find_path(ROCKSDB_INCLUDE_DIR rocksdb/db.h PATHS)
include_directories(${ROCKSDB_INCLUDE_DIR})

find_library(ROCKSDB_LIB rocksdb)

add_executable(learning_cpp main.cpp)
target_link_libraries(learning_cpp ${ROCKSDB_LIB})