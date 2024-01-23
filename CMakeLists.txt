cmake_minimum_required(VERSION 3.13)

project(main)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -flto -O2 -g2 -mreference-types")


add_library(table STATIC
    table.c)
target_link_options(table
    PRIVATE "-flto" "-mreference-types" "-O2" "-g2")

add_executable(main
    main.c)
target_link_options(main
    PRIVATE "-flto" "-mreference-types" "-O2" "-g2" "--js-library=library_table.js")
target_link_libraries(main
    table)
