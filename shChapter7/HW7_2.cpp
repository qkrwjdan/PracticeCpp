#include <stdio.h>
int N = 1000; // variable N, scope : all of this file

int cal_sum();

int main() {
    int sum; // variable sum, scope : main func
    sum = cal_sum();
    {
        int k;// variable k, scope : first {}
        k = 9;
        printf("k = %d\n", k);
        //end of k scope
    }
    printf("summation of 0 to %d = %d\n", N, sum); return 0;
}

int cal_sum(void) {
    int i, s = 0; //variable i , s, scope : cal_sum func;
    for (i = 0; i <= N; i++) s += i;
    return s;
}