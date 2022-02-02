cmake_minimum_required(VERSION 3.14)

project(cyclotomic)

add_definitions(-DUSE_GASMAN)
file(GLOB SOURCES lib/*.cpp lib/gap/*.c lib/gap/*.cc)

include_directories(include)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

file(GLOB HEADERS include/*.h)
install(FILES ${HEADERS} DESTINATION include/${PROJECT_NAME})

set(TEST_SOURCES
    test/cyclotomic.t.cpp
)

find_package(GTest 1.11.0 CONFIG REQUIRED)

add_executable(unit_tests ${TEST_SOURCES} test/main.cpp)
target_link_libraries(unit_tests GTest::gtest cyclotomic readline gmp z util dl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
