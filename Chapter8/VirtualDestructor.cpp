////
//// Created by macbook air on 2020-04-22.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class First{
//private:
//    char * strOne;
//public:
//    First(char * str){
//        strOne = new char[strlen(str) + 1];
//    }
//    virtual ~First(){
//        delete []strOne;
//        cout<<"First()"<<endl;
//    }
//};
//
//class Second : public First{
//private:
//    char * strTwo;
//public:
//    Second(char * str1, char * str2) : First(str1){
//        strTwo = new char[strlen(str2) + 1];
//    }
//    ~Second(){
//        cout<<"Second()"<<endl;
//        delete []strTwo;
//    }
//};
//
//int main(void){
//    First * f = new Second("afs","Gdfs");
//    delete f;
//    return 0;
//}