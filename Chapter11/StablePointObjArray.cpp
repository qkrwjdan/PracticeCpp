////
//// Created by macbook air on 2020-04-28.
////
//
//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//class Point{
//private:
//    int xpos,ypos;
//
//public:
//    Point(int x=0,int y=0) : xpos(x),ypos(y){
//
//    }
//
//    friend ostream& operator<<(ostream & os, const Point& pos);
//};
//
//ostream & operator<<(ostream & os, const Point& pos){
//    os<<'['<<pos.xpos<<" , "<<pos.ypos<<"]"<<endl;
//    return os;
//}
//
//typedef Point * POINT_PTR;
//
//class BoundCheckArray{
//private:
//    POINT_PTR * arr;
//    int arrlen;
//    BoundCheckArray(const BoundCheckArray& arr) {}
//    BoundCheckArray& operator=(const BoundCheckArray& arr) {}
//
//public:
//    BoundCheckArray(int len) : arrlen(len){
//        arr = new POINT_PTR[len];
//    }
//
//    POINT_PTR &operator[](int idx) const{
//        if(idx < 0 || idx >= arrlen){
//            cout<<"Array index out of bound exception"<<endl;
//            exit(1);
//        }
//        return arr[idx];
//    }
//
//    POINT_PTR &operator[](int idx) {
//        if(idx < 0 || idx >= arrlen){
//            cout<<"Array index out of bound exception"<<endl;
//            exit(1);
//        }
//        return arr[idx];
//    }
//
//    int GetArrLen() const { return arrlen;}
//
//    ~BoundCheckArray(){
//        delete []arr;
//    }
//};
//
//int main(void){
//    BoundCheckArray arr(3);
//    arr[0] = new Point(3,4);
//    arr[1] = new Point(2,4);
//    arr[2] = new Point(41,23);
//
//    for(int i=0;i<arr.GetArrLen();i++){
//        cout<<*arr[i];
//    }
//
//    delete arr[0];
//    delete arr[1];
//    delete arr[2];
//
//    return 0;
//
//}