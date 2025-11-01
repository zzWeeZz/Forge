project(Forge-Entrypoint)


add_executable(Forge-Entrypoint "src/EntryPoint/EntryPoint.cpp")

target_include_directories(Forge-Entrypoint PUBLIC src)
target_link_libraries(Forge-Entrypoint PUBLIC Forge-Core)
