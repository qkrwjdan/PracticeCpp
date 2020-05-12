#include <iostream>
using namespace std;
#define DATANUM 10

float sigmaXSquare(float arr[DATANUM][2],int xOrY);

float squareSigmaX(float arr[DATANUM][2],int xOrY);

float sigmaXMulY(float arr[DATANUM][2]);

float sigmaXMulSigmaY(float arr[DATANUM][2]);

float computeAvg(float arr[DATANUM][2],int xOrY);

int main(){
    float data[DATANUM][2] = {
            {3.0,1.5},
            {4.5,2.0},
            {5.5,3.5},
            {6.5,5.0},
            {7.5,6.0},
            {8.5,7.5},
            {8.0,9.0},
            {9.0,10.5},
            {9.5,12.0},
            {10.0,14.0}
    };

    float up = DATANUM * sigmaXMulY(data) - sigmaXMulSigmaY(data);
    float down = DATANUM * sigmaXSquare(data,0) - squareSigmaX(data,0);

    cout<<up<<endl;
    cout<<down<<endl;

    float b = up / down;
    cout<<b<<endl;

    float yBar = computeAvg(data,1);
    float xBar = computeAvg(data,0);

    cout<<yBar<<"  "<<xBar<<endl;

    float a = yBar - b * xBar;
    cout<<a<<endl;

    cout<<"a : "<<a<<", b : "<<b<<endl;

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

float computeAvg(float arr[DATANUM][2],int xOrY){
    float sum = 0;
    int i=0;

    for(i=0;i<DATANUM;i++){
        sum = sum + arr[i][xOrY];
    }
    return sum / DATANUM;
}
