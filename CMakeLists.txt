cmake_minimum_required(VERSION 3.14)
project(zoo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(zoo
        animal.cpp
        animal.h
        birds.cpp
        birds.h
        clownfish.cpp
        clownfish.h
        dog.cpp
        dog.h
        fish_and_sea_creatures.cpp
        fish_and_sea_creatures.h
        goose.cpp
        goose.h
        ibirds.cpp
        ibirds.h
        ifish_and_sea_creatures.cpp
        ifish_and_sea_creatures.h
        imammals.cpp
        imammals.h
        lion.cpp
        lion.h
        main.cpp
        mammals.cpp
        mammals.h
        monkey.cpp
        monkey.h
        shark.cpp
        shark.h
        snowy_owl.cpp
        snowy_owl.h
        whale.cpp
        whale.h
        zoo.cpp
        zoo.h)
