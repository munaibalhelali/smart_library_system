cmake_minimum_required(VERSION 3.15)
project(smart_library_system)
message(STATUS "Configuring ${PROJECT_NAME}")

add_executable(${PROJECT_NAME} src/driver_program.cpp src/admin.cpp src/book.cpp src/database.cpp src/login_data.cpp src/login.cpp src/shelf.cpp src/student.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)


