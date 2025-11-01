cmake_minimum_required(VERSION 3.5)

project(Forge)
set(CMAKE_CXX_STANDARD 23)

add_subdirectory(External/googletest)
add_subdirectory(External/NVRHI)

add_subdirectory(Forge-Entrypoint)
