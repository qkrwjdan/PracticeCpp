#include <stdio.h>

int absolute(int x){
    if(x > 0)
        return x;
    else
        return -x;
}

int main(){
    int minusA = -10;
    int plusA = 10;

    printf("%d\n",absolute(minusA));
    printf("%d\n",absolute(plusA));
}