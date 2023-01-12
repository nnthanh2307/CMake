project(app)
cmake_minimum_required(VERSION 3.22)
set(CXX_STANDARD 14)
set(CXX_STANDARD_REQUIRED ON)

set(SRC ${CMAKE_SOURCE_DIR}/src/)
set(HDR ${CMAKE_SOURCE_DIR}/hdr/)
set(LIB_SRC ${CMAKE_SOURCE_DIR}/library/)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/app/)

# Option build
option(USE_HELPER "Using helper library" ON)

# Preprocessor
add_definitions(-DACTIVE_MODULE="Active Module")

include_directories(${HDR})
aux_source_directory(${SRC} SRC_FILE)

add_executable(${PROJECT_NAME} ${SRC_FILE})

if (USE_HELPER)
    message("Using Helper")
    add_subdirectory(${LIB_SRC})
    list(APPEND EXTERNAL_LIB helper)
endif()

target_link_libraries(${PROJECT_NAME} ${EXTERNAL_LIB})
