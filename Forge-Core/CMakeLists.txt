project(Forge-Core)

file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")

add_library(Forge-Core ${SOURCES})

target_include_directories(Forge-Entrypoint PUBLIC src)
