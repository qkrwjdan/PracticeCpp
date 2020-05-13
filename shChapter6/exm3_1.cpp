#include <stdio.h>

int sqrt(int n){
    return n*n;
}

int main(){
    int minusA = -10;
    int plusA = 10;

    printf("%d\n",sqrt(minusA));
    printf("%d\n",sqrt(plusA));
}