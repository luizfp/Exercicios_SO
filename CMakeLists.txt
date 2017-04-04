cmake_minimum_required(VERSION 3.6)
project(Exercicios_SO)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c processos/processos.c processos/processos.h threads/threads.c threads/threads.h)
add_executable(Exercicios_SO ${SOURCE_FILES})