cmake_minimum_required(VERSION 3.16)
project(SpeechManager)

set(CMAKE_CXX_STANDARD 14)

add_library(SpeechManager SpeechManager.cpp SpeechManager.h Speaker.cpp Speaker.h)
add_subdirectory(examples)