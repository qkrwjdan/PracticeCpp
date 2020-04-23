////
//// Created by macbook air on 2020-04-23.
////
//
//#include <iostream>
//using namespace std;
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
//    Point &operator++(){
//        xpos+=1;
//        ypos+=1;
//        return *this;
//    };
//
//    Point &operator++(int){
//        xpos+=1;
//        ypos+=1;
//        return *this;
//    }
//
//};
//
//int main(void){
//    Point pos(3,5);
//    pos.ShowPosition();
//    pos++;
//    pos.ShowPosition();
//
//    pos++.ShowPosition();
//}