////
//// Created by macbook air on 2020-04-14.
////
//
//#include <iostream>
//#include "Point.h"
//#include "Rectangle.h"
//using namespace std;
//
//int main(void){
//    Point pos1;
//    if(!pos1.InitMembers(-2,4))
//        cout<<"1.초기화 실패"<<endl;
//    if(!pos1.InitMembers(2,4))
//        cout<<"2.초기화 실패"<<endl;
//
//    Point pos2;
//    if(!pos2.InitMembers(5,3))
//        cout<<"3.초기화 실패"<<endl;
//
//    Rectangle rec;
//    if(!rec.InitMembers(pos2,pos1))
//        cout<<"4.직사각형 초기화 실패"<<endl;
//
//    if(!rec.InitMembers(pos1,pos2))
//        cout<<"5.직사각형 초기화 실패"<<endl;
//
//    rec.ShowRecInfo();
//    return 0;
//}