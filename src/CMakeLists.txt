cmake_minimum_required(VERSION 3.1)

set(HEADERS
    sto.h
    car.h
    icar.h
    utils.h
    uimenu.cpp
    carowner.h
)

set(SOURCES
    sto.cpp
    car.cpp
    main.cpp
    icar.cpp
    uimenu.h
    carowner.cpp
)

include(GoogleTest)
add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        GTest::gtest
        GTest::gmock
)
