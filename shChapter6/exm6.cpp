#include <stdio.h>

int power(int x, int y) {

    int i;
    long result = 1;
    for(i = 0; i < y; i++)
        result *= x;
    return result;
}

int main(){
    int a = 2,b = 10;
    int result = power(a,b);
    printf("%d",result);

    return 0;
}