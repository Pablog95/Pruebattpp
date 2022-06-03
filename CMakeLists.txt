cmake_minimum_required(VERSION 3.22)
project(Pruebattpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Pruebattpp
        archivo.cpp
        archivo.h
        cola.h
        cuento.cpp
        cuento.h
        escritor.cpp
        escritor.h
        historica.cpp
        historica.h
        lectura.cpp
        lectura.h
        lista.h
        main.cpp
        menu.cpp
        menu.h
        nodo.h
        novela.cpp
        novela.h
        poema.cpp
        poema.h)
