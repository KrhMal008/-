cmake_minimum_required(VERSION 3.20)
project(labs)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/*.cpp")
list(FILTER SOURCES EXCLUDE REGEX "/cmake-build-")

set(i 0)
foreach(src ${SOURCES})
    math(EXPR i "${i}+1")
    get_filename_component(fname ${src} NAME_WE)
    get_filename_component(dir ${src} DIRECTORY)
    get_filename_component(dirname ${dir} NAME)
    string(MAKE_C_IDENTIFIER "${dirname}_${fname}" id)
    string(REGEX REPLACE "_+" "_" id ${id})
    add_executable("${i}${id}" ${src})
endforeach()