cmake_minimum_required(VERSION 3.10)
project(demo-sqlite VERSION 1.0)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Automatically collect all source files in the 'src' directory
file(GLOB_RECURSE SOURCES src/*.cpp)

# Automatically collect all header files in the 'include' directory
file(GLOB_RECURSE HEADERS include/*.h)

# Include directories for header files
include_directories(include)

# Add executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# If you have external libraries, you can find and link them here
# For example, if you're using Boost:
# find_package(Boost REQUIRED COMPONENTS ...)
# target_link_libraries(${PROJECT_NAME} PUBLIC Boost::boost)
