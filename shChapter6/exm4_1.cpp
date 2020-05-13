#include <stdio.h>

void printHello(int repeat){
    int i=0;
    for(i=0;i<repeat;i++)
        printf("Hello!\n");
}

int main(){
    int re = 10;
    printHello(10);

    return 0;
}