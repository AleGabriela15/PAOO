cmake_minimum_required(VERSION 3.0)

# Define the library target
add_library(pizza_subsrc 
                exemplu.cpp
)

# Include the source directory for header files
target_include_directories(pizza_subsrc
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)