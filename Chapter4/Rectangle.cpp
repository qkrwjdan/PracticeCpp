//
// Created by macbook air on 2020-04-14.
//

#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;


Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2):upLeft(x1,y1),lowRight(x2,y2) {
    //empty
}

//bool Rectangle::InitMembers(const Point &ul, const Point &lr) {
//    if(ul.GetX() > lr.GetX() || ul.GetY() < lr.GetY()){
//        cout<<"잘못된 위치정보 전달"<<endl;
//        return false;
//    }
//    upLeft = ul;
//    lowRight = lr;
//    return true;
//}

void Rectangle::ShowRecInfo() const {
    cout<<"좌 상단 : "<<"["<<upLeft.GetX()<<","<<upLeft.GetY()<<"]"<<endl;
    cout<<"우 하단 : "<<"["<<lowRight.GetX()<<","<<lowRight.GetY()<<"]"<<endl;
}