project(helper)
cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 14)
message("===== Build [${PROJECT_NAME}] =====")

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/ SRC_FILE)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/)
set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/buid/)
list(APPEND HDR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/hdr/)

message("Debug " ${SRC_FILE})

add_library(${PROJECT_NAME} SHARED)
target_sources(${PROJECT_NAME} PRIVATE ${SRC_FILE})
target_include_directories(${PROJECT_NAME} 
                            PUBLIC ${HDR_FILE})

