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
//    Point& operator+=(const Point &pos){
//        this->xpos += pos.xpos;
//        this->ypos += pos.ypos;
//        return *this;
//    }
//
//    Point& operator-=(const Point &pos){
//        this->xpos -= pos.xpos;
//        this->ypos -= pos.ypos;
//        return *this;
//    }
//
//    friend Point operator+(const Point &pos1, const Point &pos2);
//    friend Point operator-(const Point &pos1, const Point &pos2);
//    friend bool operator==(const Point &pos1, const Point &pos2);
//    friend bool operator!=(const Point &pos1, const Point &pos2);
//
//};
//
//Point operator+(const Point &pos1, const Point &pos2){
//    Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//    return pos;
//}
//
//Point operator-(const Point &pos1, const Point &pos2){
//    Point pos(pos1.xpos-pos2.xpos, pos1.xpos-pos2.xpos);
//    return pos;
//}
//
//bool operator==(const Point &pos1, const Point &pos2){
//    if((pos1.xpos == pos2.xpos) && (pos1.ypos == pos2.ypos))
//        return true;
//    else
//        return false;
//
//}
//
//bool operator!=(const Point &pos1, const Point &pos2){
//    if(pos1 == pos2)
//        return false;
//    else
//        return true;
//
//}
//
//int main(void){
//    Point pos1(3,4);
//    Point pos2(10,20);
//    Point pos3 = pos1 + pos2;
//
//    Point pos4(5,5);
//    Point pos5(10,10);
//
//    Point pos6(5,5);
//
//    if(pos4==pos6)
//        cout<<"pos4 == pos6"<<endl;
//    if(pos4==pos5)
//        cout<<"pos4 == pos5"<<endl;
//
//    if(pos4!=pos5)
//        cout<<"pos4 != pos5"<<endl;
//    if(pos4!=pos6)
//        cout<<"pos4 != pos6"<<endl;
//
//
//
//    pos4 += pos5;
//
//    pos1.ShowPosition();
//    pos2.ShowPosition();
//    pos3.ShowPosition();
//    pos4.ShowPosition();
//    return 0;
//}