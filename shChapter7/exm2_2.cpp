#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x;
    int y;

    time_t a = time(NULL);

    cout<<"input x : ";
    cin>>x;
    cout<<"input y : ";
    cin>>y;
    time_t b = time(NULL);
    cout << "Processing time = " << int(b - a) << " sec" << endl;

    return 0;
}