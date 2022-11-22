#Lucciano Sileo alu0101501253 18/11/22
cmake_minimum_required(VERSION 3.0.0)

project(program)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(program main.cc tools.cc) #añadir todos los archivos *.cc OJO NO TE EQUIVOQUES
