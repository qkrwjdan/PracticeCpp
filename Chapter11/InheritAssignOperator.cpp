////
//// Created by macbook air on 2020-04-28.
////
//
//#include <iostream>
//using namespace std;
//
//class First{
//private:
//    int num1, num2;
//
//public:
//    First(int n1, int n2) : num1(n1),num2(n2){
//
//    }
//
//    void ShowData() const{
//        cout<<num1<<" , "<<num2<<endl;
//    }
//
//    First& operator=(const First& ref){
//        cout<<"First & operator=()"<<endl;
//        this->num1 = ref.num1;
//        this->num2 = ref.num2;
//        cout<<"First & operator=()"<<endl;
//        return *this;
//    }
//};
//
//class Second : public First{
//private:
//    int num3, num4;
//
//public:
//    Second(int n1,int n2, int n3, int n4) : First(n1,n2),num3(n3),num4(n4){
//
//    }
//
//    void ShowData() const{
//        First::ShowData();
//        cout<<num3<< " , "<<num4<<endl;
//    }
//
//
//    Second & operator=(const Second& ref){
//        First::operator=(ref);
//        cout<<"Second & operator=()"<<endl;
//        this->num3 = ref.num3;
//        this->num4 = ref.num4;
//        return *this;
//    }
//
//
//};
//
//int main(void){
//
//    Second ssrc(11,22,33,44);
//    Second scpy(1,1,1,1);
//
//    cout<<"operator"<<endl;
//    scpy = ssrc;
//
//
//    cout<<"Show Data!"<<endl;
//    scpy.ShowData();
//
//    return 0;
//}
//
