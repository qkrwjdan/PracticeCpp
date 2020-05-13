#include <iostream>
using namespace std;

int prime();

int main() {
    int num, i, flag = 0;
    num = prime();

    for (i = 2; i < num; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << num;
    } else {
        cout << num << "is a prime number.";
    }
    return 0;
}

int prime(){

    int n;
    printf("Enter a positive integer to check: ");
    cin >> n;
    return n;
}