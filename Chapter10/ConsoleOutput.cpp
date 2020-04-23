////
//// Created by macbook air on 2020-04-23.
////
//
//#include <iostream>
//
//namespace mystd{
//    using namespace std;
//
//    class ostream{
//    public:
//        ostream& operator<<(char * str){
//            printf("%s",str);
//            return *this;
//        }
//
//        ostream& operator<<(char str){
//            printf("%c",str);
//            return *this;
//        }
//
//        ostream& operator<<(int num){
//            printf("%d",num);
//            return *this;
//        }
//
//        ostream& operator<<(double e){
//            printf("%g",e);
//            return *this;
//        }
//
//        ostream& operator<< (ostream & (*fp)(ostream &ostm)){
//            fp(*this);
//            return *this;
//        }
//    };
//
//    ostream & endl(ostream &ostm){
//        ostm<<'\n';
//        fflush(stdout);
//        return ostm;
//    }
//
//    ostream cout;
//
//}
//
//int main(void){
//    using mystd::cout;
//    using mystd::endl;
//
//    cout<<"Simple String"<<endl;
//    cout<<endl;
//    cout<<3.14<<" + "<<4234.13<<" = "<< 3.14 + 4234.13<<endl;
//    endl(cout);
//    return 0;
//}