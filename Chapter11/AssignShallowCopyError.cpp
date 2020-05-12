////
//// Created by macbook air on 2020-04-28.
////
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Person{
//private:
//    char * name;
//    int age;
//
//public:
//    Person(char * name, int age) : age(age){
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//    }
//
//    void ShowPersonInfo() const{
//        cout<<"name : "<<this->name<<endl;
//        cout<<"age : "<<this->age<<endl;
//    }
//
//    ~Person(){
//        delete []name;
//        cout<<"called destructor Person"<<endl;
//    }
//
//};
//
//int main(void){
//    Person man1("Lee",23);
//    Person man2("Yoon",23);
//
//    man2 = man1;
//
//    man1.ShowPersonInfo();
//    man2.ShowPersonInfo();
//}