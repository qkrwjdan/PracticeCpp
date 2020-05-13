#include <iostream>
using namespace std;

int min(int, int);

int main() {

    int num1, num2, sum;
    cout << "Enters two numbers to minus: ";
    cin >> num1 >> num2;
    sum = min(num1, num2);
    cout << "Sum = " << sum;
    return 0;
}

int min(int a, int b) {

    int result;
    result = a - b;
    return result;
}