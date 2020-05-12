//
// Created by macbook air on 2020-05-12.
//
//
//#include <iostream>
//using namespace std;
//#define SIZE (5)
//int main() {
//    int a[SIZE] = {1, 2, 3, 4, 5};
//    int b[SIZE] = {1, 2, 3, 4, 5};
//
//    if(a == b){
//        cout<<"a == b"<<endl;
//    }else{
//        cout<<"a != b"<<endl;
//    }
//    return 0;
//}
//
//틀린이유 : 배열을 비교할때는 각각의 원소를 비교해주어야 한다.
//틀린이유 : 배열의 이름은 배열의 시작주소를 나타낸다.

//#include <iostream>
//using namespace std;
//#define SIZE (5)
//int main() {
//    int a[SIZE] = {1, 2, 3, 4, 5};
//    int b[SIZE] = {1, 2, 3, 4, 5};
//    int i;
//    for (i = 0; i < SIZE; i++)
//        if (a[i] != b[i])
//            break;
//    if (i == SIZE)
//        cout << "a == b" << endl;
//    else
//        cout << "a != b" << endl;
//    return 0;
//}