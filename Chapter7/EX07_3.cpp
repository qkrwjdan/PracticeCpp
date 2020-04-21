////
//// Created by macbook air on 2020-04-21.
////
//
//#include <iostream>
//using namespace std;
//
//class Rectangle{
//private:
//    int width;
//    int height;
//public:
//    Rectangle(int width,int height) : width(width),height(height){}
//
//    void ShowAreaInfo(){
//        cout<<"면적 : "<< width*height<<endl;
//    }
//};
//
//class Square : public Rectangle{
//public:
//    Square(int length) : Rectangle(length,length){}
//};
//
//int main(void){
//    Rectangle rec(4,3);
//    rec.ShowAreaInfo();
//
//    Square sqr(7);
//    sqr.ShowAreaInfo();
//    return 0;
//}