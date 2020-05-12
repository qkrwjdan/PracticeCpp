//
// Created by macbook air on 2020-05-12.
//

#include <iostream>
using namespace std;
int main() {
    double height[] = {174.1, 175.5, 157.2, 198.9, 180.2, 160.4};
    int i, size;
    size = sizeof(height) / sizeof(height[0]);
    for (i = 0; i < size; i++)
        cout <<i <<" : "<< height[i] <<endl;
    return 0;
}