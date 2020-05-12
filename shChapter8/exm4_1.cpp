//
// Created by macbook air on 2020-05-12.
//

#include <iostream>
using namespace std;
#define PERSON (3)
int main() {
    float heightAvg = 0, sum = 0;
    int i;

    int personArray[PERSON] = {0};

    cout << "Input height:\n";
    for (i = 0; i < PERSON; i++) {
        cout << i + 1 << "'s height : ";
        cin >> personArray[i];
    }

    for (i = 0; i < PERSON; i++) {
        sum += personArray[i];
    }
    heightAvg = sum / PERSON;
    cout << "\nAverage score = " << heightAvg;
    return 0;
}