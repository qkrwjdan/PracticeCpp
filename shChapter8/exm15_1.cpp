//#include <iostream>
//using namespace std;
//
//void display(int n[3][2]);
//void multi(int n[3][2], int m[3][2]);
//
//int main() {
//    int num1[3][2] = {
//            {3, 4},
//            {9, 5},
//            {7, 1}
//    };
//
//    int num2[3][2] = {
//            {3, 4},
//            {9, 5},
//            {7, 1}
//    };
//
//    display(num1);
//    display(num2);
//
//    multi(num1,num2);
//
//    display(num1);
//    display(num2);
//
//    return 0;
//}
//
//void display(int n[3][2]) {
//    cout << "Displaying Values: " << endl;
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 2; ++j) {
//            cout << n[i][j] << " ";
//        }
//    }
//    cout<<endl;
//}
//
//void multi(int n[3][2],int m[3][2]){
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 2; ++j) {
//            n[i][j] = n[i][j] * m[i][j];
//        }
//    }
//}