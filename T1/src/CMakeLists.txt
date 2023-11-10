cmake_minimum_required(VERSION 3.0)

# Define the library target
add_library(pizza_src 
                pizza.cpp
                suc.cpp
)

# Include the source directory for header files
target_include_directories(pizza_src
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)