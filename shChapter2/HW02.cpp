#include <iostream>
#include <stdio.h>

using namespace std;

void myprint(int ,int );
void myprint(double);
void myprint(int, int, double);
void enter();
float divider(int, int);

int fNum = 0;
int sNum = 0;

int main(){

    double result;

    while(true){
        enter();

        myprint(fNum,sNum);
        result = divider(fNum,sNum);
        myprint(result);
        myprint(fNum,sNum,result);

        printf("\n");

        if(fNum == 0)
            break;
    }

    return 0;
}

void myprint(int a,int b){
    printf("What is %d divided by %d \n?",a,b);
}

void myprint(double c){
    printf("The result is %.4f\n",c);
}

void myprint(int a, int b, double c){
    printf("Dividing %d by %d results in %.4f\n",a,b,c);
}

void enter(){
    fNum = 0;
    sNum = 0;

    printf("Enter first number :"); scanf("%d",&fNum);

    while(sNum == 0){
        printf("Enter second number :");scanf("%d",&sNum);
        if(sNum == 0)
            printf("The denominator must not zero\n");
        printf("\n");
    }
}

float divider(int a, int b){
    return double(a) / double(b);
}
