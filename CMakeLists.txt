cmake_minimum_required(VERSION 3.24)
project(wofframcellularautomata)


include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.5.1)
FETCHCONTENT_MAKEAVAILABLE(SFML)


set(CMAKE_CXX_STANDARD 17)
add_executable(wofframcellularautomata main.cpp Application.cpp Application.h CellularAutomaton.cpp CellularAutomaton.h)

target_link_libraries(wofframcellularautomata sfml-graphics)