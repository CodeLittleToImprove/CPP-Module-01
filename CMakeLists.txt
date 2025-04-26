cmake_minimum_required(VERSION 3.30)
project(cpp01)

set(CMAKE_CXX_STANDARD 98)


add_executable(cpp01_ex_00
        ex00/Zombie.cpp
        ex00/Zombie.hpp
        ex00/randomChump.cpp
        ex00/main.cpp
        ex00/newZombie.cpp)

add_executable(cpp01_ex_01
        ex01/Zombie.cpp
        ex01/Zombie.hpp
        ex01/main.cpp
        ex01/zombieHorde.cpp
        ex01/zombieHorde.cpp)

add_executable(cpp01_ex_02
        ex02/main.cpp
)