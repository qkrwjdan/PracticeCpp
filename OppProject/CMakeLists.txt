cmake_minimum_required(VERSION 3.14)
project(OppProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(OppProject main.cpp Account.h NormalAcount.h HighCreditAccount.h AccountHandler.h BankingCommonDecl.h Account.cpp AccountHandler.cpp)