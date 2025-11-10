cmake_minimum_required(VERSION 3.5)

project(Forge)
set(CMAKE_CXX_STANDARD 23)
enable_testing()

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(External/googletest)
add_subdirectory(External/raylib)
add_subdirectory(External/entt)

add_subdirectory(Forge-Core)
add_subdirectory(Forge-Entrypoint)
