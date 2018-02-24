cmake_minimum_required(VERSION 3.9)
project(PotatoSQL)

set(CMAKE_CXX_STANDARD 11)

add_executable(PotatoSQL main.cpp unit/KeyUnit.cpp unit/KeyUnit.h unit/TableUnit.cpp unit/TableUnit.h unit/RecordUnit.cpp unit/RecordUnit.h unit/SchemaUnit.cpp unit/SchemaUnit.h storage/PotatoList.cpp storage/PotatoList.h storage/PotatoMap.cpp storage/PotatoMap.h storage/Iterator.cpp storage/Iterator.h sql/JsonParser.cpp sql/JsonParser.h)