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
//    SoBase() : baseNum(0){
//        cout<<"SoBase()"<<endl;
//    }
//    SoBase(int n) : baseNum(n){
//        cout<<"soBase(int n)"<<endl;
//    }
//    void ShowBaseData(){
//        cout<<baseNum<<endl;
//    }
//};
//
//class SoDerived : public SoBase{
//private:
//    int derivNum;
//public:
//    SoDerived() : derivNum(30){
//        cout<<"SoDerived()"<<endl;
//    }
//
//    SoDerived(int num) : derivNum(num){
//        cout<<"SoDerived(int num)"<<endl;
//    }
//
//    SoDerived(int n1, int n2) : SoBase(n1),derivNum(n2){
//        cout<<"SoDerived(int n1, int n2)"<<endl;
//    }
//
//    void ShowDerivData(){
//        ShowBaseData();
//        cout<<derivNum<<endl;
//    }
//};
//
//int main(void){
//    cout<<"case1...."<<endl;
//    SoDerived dr1;
//    dr1.ShowBaseData();
//    cout<<"case2...."<<endl;
//    SoDerived dr2(12);
//    dr2.ShowDerivData();
//    cout<<"case3...."<<endl;
//    SoDerived dr3(22,33);
//    dr3.ShowBaseData();
//    dr3.ShowDerivData();
//
//
//}