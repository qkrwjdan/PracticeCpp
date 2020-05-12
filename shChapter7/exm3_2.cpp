#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void get_random(int n){
    int i;
    for (i = 0; i < n; i++)
        cout << rand() % 100 << endl;
}

int main(){
    srand((unsigned)time(NULL));
    cout<<"1~100 random num"<<endl;

    get_random(10);
    return 0;
}