#include <stdio.h>

int main() {
    int x = 10, y = 20, z;
    float div;
    const float pi = 3.14;

    z = x + y;
    div = (float)x / y;

    printf("1) x = %d,y= %d\n",x, y);
    printf("2) z = %d\n", z);
    printf("3) x+y = %d\nx-y = %d\nx*y = %d\nx/y = %f\n",z,x-y,x*y,div);

    return 0;
}