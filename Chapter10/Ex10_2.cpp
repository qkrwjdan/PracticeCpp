////
//// Created by macbook air on 2020-04-23.
////
//
//#include <iostream>
//using namespace std;
//
//
//class Point{
//private:
//    int xpos,ypos;
//public:
//    Point(int x=0,int y=0) : xpos(x),ypos(y){}
//
//    void ShowPosition() const{
//        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
//    }
//
//    Point operator-(){
//        Point newP(-xpos,-ypos);
//        return newP;
//    }
//
//    friend Point operator~(Point & pos);
//};
//
//Point operator~(Point & ref){
//    Point newP(ref.ypos,ref.xpos);
//    return newP;
//}
//
//int main(void){
//
//    Point p1(3,4);
//
//    Point p3 = -p1;
//    p3.ShowPosition();
//
//    Point p4 = ~p1;
//    p4.ShowPosition();
//
//
//}
