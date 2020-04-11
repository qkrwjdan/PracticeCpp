////
//// Created by macbook air on 2020-04-08.
////
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Simple{
//public :
//    Simple(){
//    cout<<"I'm simple constructor"<<endl;
//    }
//};
//
//char * MakeStrAdr(int len){
//    char * str = new char[len];
//    return str;
//}
//
//int main(void){
//    char * str = MakeStrAdr(20);
//    strcpy(str, "I am so happy~");
//    cout<<str<<endl;
//    delete []str;
//
//    cout << "case1 :";
//    Simple * sp1 = new Simple;
//
//    cout << "case2 : ";
//    Simple * sp2 = (Simple*)malloc(sizeof(Simple)*1);
//
//    cout<<endl<<"end of main"<<endl;
//    delete sp1;
//    free(sp2);
//    return 0;
//
//
//}