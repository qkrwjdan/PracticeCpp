////
//// Created by macbook air on 2020-04-08.
////
//
//#include <iostream>
//using namespace std;
//
//int Plus1(int &ref){
//    ref += 1;
//}
//
//int Change(int &ref){
//    ref *= -1;
//}
//
//int SwapPointer(int **ptr1, int **ptr2){
//    int * temp = *ptr1;
//    *ptr1 = *ptr2;
//    *ptr2 = temp;
//}
//
//int main(){
//    int val1 = 10;
//    int val2 = 20;
//    Plus1(val1);
//    Change(val2);
//    cout << val1 << endl;
//    cout << val2 << endl;
//
//    int * ptr1 = &val1;
//    int * ptr2 = &val2;
//    int **dptr1 = &ptr1;
//    int **dptr2 = &ptr2;
//    SwapPointer(dptr1,dptr2);
//    cout<<*ptr1<<endl;
//    cout<<*ptr2<<endl;
//
//}