cmake_minimum_required(VERSION 3.22)
project(chat_app C)

set(CMAKE_C_STANDARD 99)

add_executable(chat_app main.c user.h chat.h message.h)
