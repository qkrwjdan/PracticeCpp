//
// Created by macbook air on 2020-05-12.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int grade[10] = { 31, 63, 62, 87, 14, 25, 92, 70, 75, 53 };
    int i;
    cout << "====================\n";
    cout << "  INDEX   VALUE\n";
    cout << "====================\n";
    for (i = 0; i < 10; i++) {
        cout << setw(5) << i << setw(9) << grade[i] << endl;
    }
    return 0;
}