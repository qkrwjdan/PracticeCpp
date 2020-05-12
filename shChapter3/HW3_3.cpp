#include <stdio.h>

int main() {
    int S1=0,S2 = 0;
    int i=0,j=0;

    for (i=1; i <= 30; i++) {
        S1 += i*i + 1;
    }

    for (i = 10; i <= 30; i++) {
        for (j=0; j <= 5; j++)
            S2 += i*j;
    }

    printf("S1 = %d\nS2 = %d\n",S1,S2);
    return 0;
}