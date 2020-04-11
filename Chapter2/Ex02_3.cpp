////
//// Created by macbook air on 2020-04-08.
////
//
//#include <iostream>
//using namespace std;
//
//typedef struct __point{
//    int xpos;
//    int ypos;
//}Point;
//
//Point& PntAdder(const Point &p1, const Point &p2);
//
//int main(void){
//
//    Point * p1 = new Point;
//    Point * p2 = new Point;
//
//    p1->xpos = 1;
//    p1->ypos = 2;
//
//    p2->xpos = 10;
//    p2->ypos = 4;
//
//    Point p3 = PntAdder(*p1,*p2);
//
//    cout<<p3.xpos<<endl;
//    cout<<p3.ypos<<endl;
//}
//
//Point& PntAdder(const Point &p1, const Point &p2){
//
//    Point * tempP = new Point;
//    tempP->xpos = p1.xpos + p2.xpos;
//    tempP->ypos = p1.ypos + p2.ypos;
//
//    return *tempP;
//}