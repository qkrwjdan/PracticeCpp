#include <stdio.h>

int check(int ch);
int multiply(int i);

int main() {
    int i = 45, c;
    c = multiply(i);
    printf("%d\n", c);

    c = check(c);

    printf("%d\n",c);

    return 0;
}

int check(int ch) {
    if (ch >= 40000)
        return ch/100;
    else
        return 10;
}

int multiply(int i){
    return i * 1000;
}