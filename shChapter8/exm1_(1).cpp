//
// Created by macbook air on 2020-05-12.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int stdNum[5];

    int i;
    for (i = 0; i < 5; i++) {
        cout << "학번을 입력하세요" << endl;
        cin >> stdNum[i];
    }
    cout << "====================\n";
    cout << "  INDEX   STDNUM\n";
    cout << "====================\n";
    for (i = 0; i < 5; i++) {
        cout << setw(5) << i << setw(9) << stdNum[i] << endl;
    }
    return 0;
}