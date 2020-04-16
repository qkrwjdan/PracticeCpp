cmake_minimum_required(VERSION 3.14)
project(Chapter5)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter5 main.cpp ClassInit.cpp ShallowCopyError.cpp Ex05_1.cpp PassObjCopycon.cpp ReturnObjCopycon.cpp IKnowTempObj.cpp ReturnObjDeadTime.cpp)