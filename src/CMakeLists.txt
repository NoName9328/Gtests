cmake_minimum_required(VERSION 3.1)

set(HEADERS
    sto.h
    car.h
    icar.h
    carowner.h
)

set(SOURCES
    sto.cpp
    car.cpp
    main.cpp
    icar.cpp
    carowner.cpp
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
