//
// Created by macbook air on 2020-04-13.
//

#include <iostream>
#include <cstring>
using namespace std;

class Calculator{
private:
    int add;
    int min;
    int mul;
    int div;
public:
    void Init();
    double Add(double a, double b);
    double Min(double a, double b);
    double Mul(double a, double b);
    double Div(double a, double b);
    void ShowOpCount();
};

void Calculator::Init() {
    add = 0;
    min = 0;
    mul = 0;
    div = 0;
}

double Calculator::Add(double a, double b) {
    add ++;
    return a + b;
}

double Calculator::Min(double a, double b) {
    min ++;
    return a - b;
}

double Calculator::Mul(double a, double b) {
    mul ++;
    return a * b;
}

double Calculator::Div(double a, double b) {
    if(b == 0){
        cout<<"0으로 나눌 수 없습니다. 다시 시도하세요."<<endl;
        return 0;
    }
    else{
        div++;
        return a / b;
    }
}

void Calculator::ShowOpCount() {
    cout<<"plus : "<<add;
    cout<<" minus : "<<min;
    cout<<" multiply : "<<mul;
    cout<<" divide : "<<div;
    cout<<endl;
}

class Printer{
private:
    char str[100];
public:
    void SaveStr(char * str);
    void PrintStr();
};

void Printer::SaveStr(char *s) {
    strcpy(str,s);
}

void Printer::PrintStr() {
    cout<<str<<endl;
}

int main(void){
    Calculator cal;
    cal.Init();

    cout<<"3.2 + 2.4 = "<<cal.Add(3.2,2.4)<<endl;
    cout<<"3.5 / 1.7 = "<<cal.Div(3.5,1.7)<<endl;
    cout<<"2.2 - 1.5 = "<<cal.Min(2.2,1.5)<<endl;
    cout<<"4.9 * 1.2 = "<<cal.Mul(4.9,1.2)<<endl;
    cal.ShowOpCount();

    Printer prn;
    prn.SaveStr("Hi I'm Printer~");
    prn.PrintStr();
    return 0;
}