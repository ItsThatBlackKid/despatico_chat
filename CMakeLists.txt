cmake_minimum_required(VERSION 3.10)

project(DespacitoChat)

set(CMAKE_SOURCE_DIR  src)

include_directories(lib)
include_directories(src/local)

#[[
add_executable(command_test tests/command_tests.c src/local/helper.c
        src/local/helper.h src/local/commands.c src/local/commands.h src/local/chat_types.h)
]]

add_executable(DespacitoChat src/main.c src/local/helper.c src/local/helper.h
       src/local/commands.c src/local/commands.h src/local/chat_types.h src/local/server.c src/local/server.h src/local/client.h src/local/client.c src/local/management.c src/local/management.h)
