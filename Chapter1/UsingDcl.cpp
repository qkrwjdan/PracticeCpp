//
// Created by macbook air on 2020-04-08.
//

#include <iostream>
using namespace std;

namespace AAA{
    namespace BBB{
        namespace CCC{
            int num1;
            int num2;
        }
    }
}

int val = 30;

int main(void){
    int num = 20;
    cout << "Hello World!" << endl;
    cout << num << " " << endl;
    cout << " " << 3.14 << endl;
    namespace ABC = AAA::BBB::CCC;
    cout<<ABC::num1<<endl;
    cin >> ABC::num2;
    cout << ABC::num2 << endl;
    int val = 20;
    cout << val << endl;
    cout << ::val << endl;
}