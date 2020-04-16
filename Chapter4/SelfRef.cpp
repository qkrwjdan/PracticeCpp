////
//// Created by macbook air on 2020-04-16.
////
//
//#include <iostream>
//using namespace std;
//
//class SelfRef{
//private:
//    int num;
//public:
//    SelfRef(int n) : num(n){
//        cout<<"객체 생성"<<endl;
//    }
//
//    SelfRef& Adder(int n){
//        num += n;
//        return *this;
//    }
//
//    SelfRef& ShowTwoNumber(){
//        cout<<num<<endl;
//        return *this;
//    }
//};
//
//int main(void){
//    SelfRef obj(3);
//    SelfRef &ref = obj.Adder(2);
//
//    obj.ShowTwoNumber();
//    ref.ShowTwoNumber();
//
//    ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//    obj.ShowTwoNumber();
//    ref.ShowTwoNumber();
//    delete &ref;
//    obj.ShowTwoNumber();// obj 와 ref 는 같은 곳을 참조하고 있어 obj도 삭제되었다.
//    return 0;
//}