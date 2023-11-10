cmake_minimum_required(VERSION 3.0)

# Adaugă sursa executabilului
add_executable(pizza_main main.cpp)

# Link the executable with the pizza_src library
target_link_libraries(pizza_main
    PRIVATE
        pizza_src
)

# Include the source directory for header files
target_include_directories(pizza_main
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)