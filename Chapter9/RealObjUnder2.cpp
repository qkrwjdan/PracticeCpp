////
//// Created by macbook air on 2020-04-23.
////
//
//#include <iostream>
//using namespace std;
//
//typedef struct Data{
//    int data;
//    void (*ShowData)(Data*);
//    void (*Add)(Data *,int);
//}Data;
//
//void ShowData(Data * THIS){
//    cout<<"Data : "<<THIS->data<<endl;
//}
//
//void Add(Data * THIS, int num){
//    THIS->data += num;
//}
//
//int main(void){
//    Data obj1 = {14,ShowData,Add};
//    Data obj2 = {17,ShowData,Add};
//
//    obj1.Add(&obj1,14);
//    obj2.Add(&obj2,24);
//
//    obj1.ShowData(&obj1);
//    obj2.ShowData(&obj2);
//
//}