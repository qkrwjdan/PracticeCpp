////
//// Created by macbook air on 2020-04-08.
////
//
//#include <iostream>
//
//void swap(int * a, int * b){
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void swap(char * ch1, char * ch2){
//    char temp;
//    temp = *ch1;
//    *ch1 = *ch2;
//    *ch2 = temp;
//}
//
//void swap(double * a, double * b){
//    double temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main(void){
//    int num1 = 20, num2 = 30;
//    std::cout << num1 << ' ' << num2 << std::endl;
//    swap(&num1,&num2);
//    std::cout << num1 << ' ' << num2 << std::endl;
//
//    char ch1 = 'a' , ch2 = 'b';
//    std::cout << ch1 << ' ' << ch2 << std::endl;
//    swap(&ch1,&ch2);
//    std::cout << ch1 << ' ' << ch2 << std::endl;
//
//    double db1 = 1.11,db2 = 5.55;
//    std::cout << db1 << ' ' << db2 << std::endl;
//    swap(&db1,&db2);
//    std::cout << db1 << ' ' << db2 << std::endl;
//
//}