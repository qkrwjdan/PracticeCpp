////
//// Created by macbook air on 2020-04-28.
////
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class BoundCheckArray{
//private:
//    int * arr;
//    int arrlen;
//    BoundCheckArray(const BoundCheckArray& arr) {}
//    BoundCheckArray& operator=(const BoundCheckArray& arr) {}
//
//public:
//    BoundCheckArray(int len) : arrlen(len){
//        arr = new int[len];
//    }
//
//    int &operator[](int idx){
//        if(idx < 0 || idx >= arrlen){
//            cout<<"Array index out of bound exception"<<endl;
//            exit(4);
//        }
//        return arr[idx];
//    }
//
//    ~BoundCheckArray(){
//        delete []arr;
//    }
//};
//
//int main(void){
//    BoundCheckArray arr(4);
//    for(int i=0;i<4;i++){
//        arr[i] = (i+1) * 11;
//    }
//
//    for(int i=0;i<5;i++){
//        cout<<arr[i]<<endl;
//    }
//
//    return 0;
//
//
//}