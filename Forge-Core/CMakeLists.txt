project(Forge-Core)

file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")

add_library(Forge-Core ${SOURCES})

target_include_directories(Forge-Core PUBLIC src)

if(BUILD_TESTING)

    file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp" "tests/*.h")
    add_executable(Forge-Core-test ${TEST_SOURCES})
    target_include_directories(Forge-Core-test PUBLIC tests)
    target_link_libraries(Forge-Core-test PRIVATE GTest::gtest_main Forge-Core)

    include(Googletest)
    gtest_discover_tests(Forge-Core-test)
endif()
