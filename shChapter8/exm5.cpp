//
// Created by macbook air on 2020-05-12.
//

#include <iostream>
using namespace std;
#define SIZE (5)

int main() {
    int arr[SIZE] = { 1,2,3,4,5 };
    int i;

    for (i = -1; i <= SIZE; i++) {
        cout << "address: " << &arr[i];
        cout << ", arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}