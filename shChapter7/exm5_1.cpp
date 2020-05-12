#include <stdio.h>

void rec(void);

int main(){

    rec();

    return 0;
}

void rec(void){
    printf("called rec!!\n");
    rec();
}