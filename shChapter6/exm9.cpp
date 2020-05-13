#include <iostream>
using namespace std;

int square(int);

int main() {

    int x = 15, z;
    z = square(x);
    cout << "z = " << z << endl;

}

int square(int a) {
    return a * a;
}