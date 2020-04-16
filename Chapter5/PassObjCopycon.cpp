////
//// Created by macbook air on 2020-04-16.
////
//
//#include <iostream>
//using namespace std;
//
//class SoSimple{
//private:
//    int num;
//public:
//    SoSimple(int n) : num(n){}
//    SoSimple(const SoSimple & copy) : num(copy.num){
//        cout<<"Called SoSimple(const SoSimple & copy!!!)"<<endl;
//    }
//    void ShowData(){
//        cout<<"num : "<<num<<endl;
//    }
//};
//
//void SoSimpleFuncObj(SoSimple obj){
//    obj.ShowData();
//}
//
//int main(void){
//    SoSimple ob(7);
//    cout<<"함수 호출 전"<<endl;
//    SoSimpleFuncObj(ob);
//    cout<<"함수 호출 후"<<endl;
//    return 0;
//}