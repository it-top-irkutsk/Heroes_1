cmake_minimum_required(VERSION 3.23)
project(Heroes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Heroes main.cpp Mage.h Barbarian.h Utilites.h Hero.h HeroCreator.h)
