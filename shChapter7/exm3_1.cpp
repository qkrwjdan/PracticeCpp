#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void get_random(int n){
    int i;
    for (i = 0; i < n; i++)
        cout << rand() << endl;
}

int main(){
    srand((unsigned)time(NULL));
    get_random(10);
    return 0;
}