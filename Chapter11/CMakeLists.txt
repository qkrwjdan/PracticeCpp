cmake_minimum_required(VERSION 3.14)
project(Chapter11)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter11 main.cpp FirstOperationOverloading.cpp AssignShallowCopyError.cpp InheritAssignOperator.cpp Ex11_1.cpp Ex11_2.cpp ArrayClass.cpp StableConstArrayProb.cpp StablePointObjArray.cpp Ex11_3.cpp)