////
//// Created by macbook air on 2020-04-28.
////
//
//#include <iostream>
//#include <cstdlib>
//
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
//    int &operator[](int idx) const{
//        if(idx < 0 || idx >= arrlen){
//            cout<<"Array index out of bound exception"<<endl;
//            exit(4);
//        }
//        return arr[idx];
//    }
//
//    int &operator[](int idx) {
//        if(idx < 0 || idx >= arrlen){
//            cout<<"Array index out of bound exception"<<endl;
//            exit(4);
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
//void ShowAllData(const BoundCheckArray& ref){
//    int len = ref.GetArrLen();
//    for(int i=0;i<len;i++){
//        cout<<ref[i]<<endl;
//    }
//}
//
//int main(void){
//    BoundCheckArray arr(4);
//    for(int i=0;i<4;i++){
//        arr[i] = (i+1) * 11;
//    }
//
//    ShowAllData(arr);
//
//    return 0;
//
//
//}