#include <stdio.h> // include the stdio header file

int N = 1000; // define global variable N as 1000
int cal_sum(); // declare cal_sum func
int main() { // start main func
    int sum; // define sum
    sum = cal_sum(); // call cal_sum func
    { // declare space
        int k; // define integer variable k
        k = 9; // k is integer 9
        printf("k = %d\n", k); // call printf func and print "9 = 9\n"
    } // end of space
    printf("summation of 0 to %d = %d\n", N, sum); //call printf func and print
    return 0; // return 0 as end of main func
} //end of main

int cal_sum(void) { //define cal_sum func
    int i, s = 0; // define integer i, s is 0
    for (i = 0; i <= N; i++) // for loop while i is less than 1000, i plus 1
        s += i; // s is s + i
        return s; // return s as end of cal_sum fun
} // end of cal_sum