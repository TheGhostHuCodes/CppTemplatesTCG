CMAKE_MINIMUM_REQUIRED(VERSION 3.0 FATAL_ERROR)
PROJECT("CppTemplatesTheCompleteGuide")

ADD_COMPILE_OPTIONS(-std=c++11)
SET(CMAKE_EXPORT_COMPILE_COMMANDS 1)
MESSAGE("${CMAKE_CXX_COMPILER_ID}")

IF("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    SET(WARNINGS "-Wall -Wextra")
ELSEIF("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
    SET(WARNINGS "-Weverything -Wall -Wextra -Wno-c++98-compat \
            -Wno-c++98-compat-pedantic -Wno-padded -Wno-global-constructors \
            -Wno-exit-time-destructors -Wno-newline-eof -Werror")
ENDIF()
IF(NOT CONFIGURED_ONCE)
    SET(CMAKE_CXX_FLAGS "${WARNINGS}"
        CACHE STRING "Flags used by the compiler during all build types."
        FORCE)
ENDIF(NOT CONFIGURED_ONCE)

ADD_EXECUTABLE(max basics/max.cpp)
ADD_EXECUTABLE(max2 basics/max2.cpp)
ADD_EXECUTABLE(max3 basics/max3.cpp)
ADD_EXECUTABLE(max3a basics/max3a.cpp)
ADD_EXECUTABLE(max4 basics/max4.cpp)
ADD_EXECUTABLE(stack1test basics/stack1test.cpp)
ADD_EXECUTABLE(stack2test basics/stack2test.cpp)
ADD_EXECUTABLE(stack3test basics/stack3test.cpp)
ADD_EXECUTABLE(stack4test basics/stack4test.cpp)
ADD_EXECUTABLE(addval basics/addval.cpp)

SET(CONFIGURED_ONCE TRUE CACHE INTERNAL
        "A flag showing that CMake has configured at least once.")
