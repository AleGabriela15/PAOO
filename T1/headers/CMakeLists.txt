cmake_minimum_required(VERSION 3.0)

# List the header files
set(HEADERS
    blat.hpp
    pizza.hpp
)

# Specify the header-only library
add_library(pizza_headers INTERFACE)

# Include the source directory for header files
target_sources(pizza_headers
    INTERFACE
        ${HEADERS}
)

# Include the source directory for header files
target_include_directories(pizza_headers
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)