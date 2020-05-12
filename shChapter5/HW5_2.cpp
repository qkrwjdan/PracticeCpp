#include <stdio.h>

int main() {
    int x, y;
    float div;

    printf("1)Enter two numbers\n");
    scanf("%d %d", &x, &y);
    printf("they are %d and %d.\n",y,x);

    printf("2)Enter two numbers\n");
    scanf("%d %d", &x, &y);
    div = (float)x / y;
    printf("sum:%d sub:%d mul:%d div:%.f\n",x+y,x-y,x*y,div);

    return 0;
}