#include <iostream>
using namespace std;

int plusAB(int num1, int num2);
float plusAB(float num1, float num2);

int main(){
    int a = 1;
    int b = 2;
    float c = 3.1;
    float d = 2.6;

    cout<<plusAB(a,b)<<endl;
    cout<<plusAB(c,d)<<endl;

}

int plusAB(int num1, int num2){
    return num1 + num2;
}


float plusAB(float num1, float num2){
    return num1 + num2;
}