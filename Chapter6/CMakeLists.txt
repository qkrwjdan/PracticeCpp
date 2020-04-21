cmake_minimum_required(VERSION 3.14)
project(Chapter6)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter6 main.cpp ConstObject.cpp ConstOverloading.cpp MyFriendClass.cpp MyFreindFunction.cpp CComStatic.cpp NeedGlobal.cpp PublicStaticMember.cpp ConstStaticMember.cpp Mutable.cpp)