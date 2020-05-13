#include <stdio.h>

int plus(int a,int b){
    return a+b;
}

int main(){
    int a = 10;
    int b = 113;
    int result = plus(a,b);
    printf("%d\n",result);

    return 0;
}