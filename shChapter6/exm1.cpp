#include <stdio.h>

int square(int n){
    return(n*n);
}

int main(){
    int n = 10;
    int sq = square(n);
    printf("%d\n",sq);

    return 0;
}