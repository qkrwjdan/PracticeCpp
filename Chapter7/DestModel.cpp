////
//// Created by macbook air on 2020-04-21.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person{
//
//private:
//    char * name;
//public:
//    Person(char * name){
//        this->name = new char[strlen(name)+1];
//        strcpy(this->name,name);
//    }
//    ~Person(){
//        delete []name;
//    }
//    void WhatYourName() const{
//        cout<<"name : "<<name<<endl;
//    }
//
//};
//
//class Student : public Person{
//private:
//    char *major;
//public:
//    Student(char * name,char * major) :Person(name){
//        this->major = new char[strlen(major) + 1];
//        strcpy(this->major,major);
//    }
//    ~Student(){
//        delete []major;
//    }
//    void WhoAreYou() const{
//        WhatYourName();
//        cout<<"major is "<<major<<endl;
//    }
//};
//
//int main(void){
//    Student st1("Kim","Mathematics");
//    st1.WhoAreYou();
//    Student st2("Hong","physics");
//    st2.WhoAreYou();
//    return 0;
//
//}