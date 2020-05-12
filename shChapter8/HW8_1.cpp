#include <iostream>
#include <math.h>
using namespace std;
#define DATANUM 11

float sigmaXSquare(float arr[DATANUM][2],int xOrY);

float squareSigmaX(float arr[DATANUM][2],int xOrY);

float sigmaXMulY(float arr[DATANUM][2]);

float sigmaXMulSigmaY(float arr[DATANUM][2]);

int main() {
    float data[DATANUM][2] = {
            {34.22,102.43},
            {39.87,100.93},
            {41.85,97.43},
            {43.23,97.81},
            {40.06,98.32},
            {53.29,98.32},
            {53.29,100.07},
            {54.14,97.08},
            {49.12,91.59},
            {40.71,94.85},
            {55.15,94.65}
    };

    cout<<sigmaXSquare(data,0)<<endl;
    cout<<squareSigmaX(data,0)<<endl;

    cout<<sigmaXSquare(data,1)<<endl;
    cout<<squareSigmaX(data,1)<<endl;

    cout<<sigmaXMulY(data)<<endl;
    cout<<sigmaXMulSigmaY(data)<<endl;

    double up = (sigmaXMulY(data) - sigmaXMulSigmaY(data));
    double downOne = DATANUM * sigmaXSquare(data,0) - squareSigmaX(data,0);
    double downTwo = DATANUM * sigmaXSquare(data,1) - squareSigmaX(data,1);
    double r = up / sqrt(downOne * downTwo);

    cout<<"up : "<<up<<endl;
    cout<<"downOne : "<<downOne<<endl;
    cout<<"downTwo : "<<downTwo<<endl;
    cout<<" r : "<<r<<endl;

    return 0;
}

float sigmaXSquare(float arr[DATANUM][2],int xOrY){
    float sum = 0;
    int i=0;
    for(i=0;i<DATANUM;i++){
        sum = sum + (arr[i][xOrY] * arr[i][xOrY]);
    }
    return sum;
}

float squareSigmaX(float arr[DATANUM][2],int xOrY){
    float sum = 0;
    int i=0;

    for(i=0;i<DATANUM;i++){
        sum = sum + arr[i][xOrY];
    }

    sum = sum * sum;
    return sum;
}

float sigmaXMulY(float arr[DATANUM][2]){
    float sum = 0;
    int i=0;

    for(i=0;i<DATANUM;i++){
        sum = sum + arr[i][0] * arr[i][1];
    }

    return sum;

}

float sigmaXMulSigmaY(float arr[DATANUM][2]){
    float xSum = 0;
    float ySum = 0;
    int i=0;

    for(i=0;i<DATANUM;i++){
        xSum = xSum + arr[i][0];
        ySum = ySum + arr[i][1];
    }

    return xSum * ySum;
}
