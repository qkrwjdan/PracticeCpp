////
//// Created by macbook air on 2020-04-22.
////
//
//#include <iostream>
//using namespace std;
//
//class First{
//public:
//    virtual void MyFunc(){
//        cout<<"First Func"<<endl;
//    }
//};
//
//class Second :public First{
//public:
//    virtual void MyFunc(){
//        cout<<"Second Func"<<endl;
//    }
//};
//
//class Third : public Second{
//public:
//    virtual void MyFunc(){
//        cout<<"ThirdFunc"<<endl;
//    }
//};
//
//int main(void){
//    Third * tptr = new Third();
//    Second * sptr = tptr;
//    First * fptr = tptr;
//
//    fptr->MyFunc();
//    sptr->MyFunc();
//    tptr->MyFunc();
//    delete tptr;
//    return 0;
//
//}