#include <stdio.h>
#define NUM 9

//구구단 프로그램

int main(){
    int i,j;
    for(i =1; i<=NUM;i++){
        for(j=1;j<=NUM;j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
}