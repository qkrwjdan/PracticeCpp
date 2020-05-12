#include <iostream>
#include <ctime>
using namespace std;

int main() {
    unsigned long x;
    time_t a = time(NULL);
    for (x = 0; x < 4200000000; x++); // 4.2 billion times
    time_t b = time(NULL);
    cout << "Processing time = " << int(b - a) << " sec" << endl;
    return 0;
}