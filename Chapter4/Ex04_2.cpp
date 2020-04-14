////
//// Created by macbook air on 2020-04-14.
////
//
//#include <iostream>
//#include "Point.h"
//using namespace std;
//
//class Circle{
//private:
//    Point center;
//    int radius;
//public:
//
//    Circle(int x, int y, int rad):center(x,y),radius(rad){
//    }
//
//    Point GetCenter() const {
//        return center;
//    }
//    int GetRadius() const {
//        return radius;
//    }
//
//    bool SetCenter(Point point){
//        center = point;
//    }
//
//    bool SetRadius(int rad){
//        radius = rad;
//    }
//
//    void ShowCircleInfo() const{
//        cout<<"center : ";
//        center.ShowPointInfo();
//        cout<<"rad : "<<radius<<endl;
//    }
//};
//
//class Ring{
//private:
//    Circle innerCircle;
//    Circle outerCircle;
//public:
//    Ring(int ip1, int ip2, int iRad, int op1, int op2, int oRad):innerCircle(ip1,ip2,iRad),outerCircle(op1,op2,oRad){
//    }
//
//    void ShowRingInfo() const{
//        cout<<"Inner Circle Info..."<<endl;
//        cout<<"radius : "<<innerCircle.GetRadius()<<endl;
//        innerCircle.GetCenter().ShowPointInfo();
//
//        cout<<"Outer Circle Info..."<<endl;
//        cout<<"radius : "<<outerCircle.GetRadius()<<endl;
//        outerCircle.GetCenter().ShowPointInfo();
//    }
//};
//
//int main(void){
//    Ring ring(1,1,4,2,2,9);
//    ring.ShowRingInfo();
//    return 0;
//}