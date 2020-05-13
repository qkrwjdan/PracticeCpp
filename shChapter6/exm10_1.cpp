#include <stdio.h>
#define PI 3.141592

double circleArea(int a);
double circleMinusCircle(int a,int b);

int main(void) {
    int a = 10;
    int b = 15;
    double result = circleMinusCircle(15,10);
    printf("%lf",result);
    return 0;
}


double circleArea(int a){
    return a * a * PI;
}

double circleMinusCircle(int a,int b){
    return circleArea(a) - circleArea(b);
}