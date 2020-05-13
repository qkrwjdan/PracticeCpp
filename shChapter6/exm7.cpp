#include <stdio.h>

int factorial(int n) {
    int i;
    long result = 1;

    for(i = 1; i <= n; i++)
        result *= i;

    return result;
}

int main(void){
    int i = 10;
    int result = factorial(i);
    printf("%d",result);

    return 0;
}