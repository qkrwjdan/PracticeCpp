//
// Created by macbook air on 2020-05-12.
//

#include <iostream>
#include <iomanip>
using namespace std;

int grr[5];

int main() {
    int arr[5] = { 31, 63, 62, 87, 14 };
    int brr[5] = { 31, 63, 62 };
    int crr[5] = {};
    int drr[5];
    int i;

    cout << "=====================\n";
    cout << " arr brr crr grr drr\n";
    cout << "=====================\n";

    for (i = 0; i < 5; i++) {
        cout << setw(4) << arr[i];
        cout << setw(4) << brr[i];
        cout << setw(4) << crr[i];
        cout << setw(4) << grr[i];
        cout << setw(4) << drr[i] << endl;
    }
    return 0;
}