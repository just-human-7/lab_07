include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(COMMON_SRCS "../logic.cpp")

add_executable(tests_03 tests.cpp ${COMMON_SRCS})
target_include_directories(tests_03 PUBLIC ${CMAKE_SOURCE_DIR})
target_link_libraries(tests_03 PUBLIC gtest gtest_main)