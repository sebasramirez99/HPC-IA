cmake_minimum_required(VERSION 3.5)

project(parcial1HCP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(project_sources
    main.cpp
    FUNCIONES/fm.cpp)

set(project_headers
    FUNCIONES/fm.h)



add_executable(${PROJECT_NAME}
                ${project_sources}
                ${project_headers})
