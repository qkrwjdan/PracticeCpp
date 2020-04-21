////
//// Created by macbook air on 2020-04-21.
////
//
//#include <iostream>
//using namespace std;
//
//class SoBase{
//private:
//    int baseNum;
//public:
//    SoBase(int n) : baseNum(n){
//        cout<<"SoBase() : "<<baseNum<<endl;
//    }
//
//    ~SoBase(){
//        cout<<"~SoBase() : "<<baseNum<<endl;
//    }
//};
//
//class SoDerived : public SoBase{
//private:
//    int derivNum;
//public:
//    SoDerived(int n) : SoBase(n),derivNum(20){
//        cout<<"SoDerived()"<<derivNum<<endl;
//    }
//    ~SoDerived() {
//        cout<<"~SoDerived()"<<derivNum<<endl;
//    }
//
//};
//
//int main(void){
//    SoDerived drv1(15);
//    SoDerived drv2(27);
//    return 0;
//}