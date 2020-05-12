#include <stdio.h>

void printit(double a,char ch);

int main(){
    float a = 15.5;
    char ch = 'C';
    printit(a, ch);
    return 0;
}

void printit(double a, char ch) {
    printf("%f %c\n", a, ch);
    return;
}
