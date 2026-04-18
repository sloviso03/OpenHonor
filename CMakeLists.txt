cmake_minimum_required(VERSION 3.15)
project(OpenHonor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 5.0
)
FetchContent_MakeAvailable(raylib)
 
set(SOURCES
    main.cpp
    src/application/Game.cpp
    src/core/Window.cpp
    src/core/FPSCamera.cpp
    src/domain/World.cpp
)
 
add_executable(${PROJECT_NAME} ${SOURCES})
 
target_include_directories(${PROJECT_NAME} PRIVATE src)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
 