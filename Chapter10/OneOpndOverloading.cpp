////
//// Created by macbook air on 2020-04-23.
////
//
//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//    int xpos;
//    int ypos;
//public:
//
//    Point(int x, int y) : xpos(x), ypos(y) {
//
//    }
//
//    Point &operator++() {
//        xpos += 1;
//        ypos += 1;
//        return *this;
//    };
//
//    void ShowPointInfo(){
//        cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
//    }
//
//    friend Point &operator--(Point &p1);
//
//};
//
//Point &operator--(Point & p1){
//    p1.xpos -= 1;
//    p1.ypos -= 1;
//    return p1;
//}
//
//int main(void){
//    Point p1(3,4);
//    Point p2(4,5);
//
//    ++p1;
//    ++p2;
//
//    p1.ShowPointInfo();
//    p2.ShowPointInfo();
//
//    --p1;
//    --p2;
//    p1.ShowPointInfo();
//    p2.ShowPointInfo();
//    return 0;
//
//}