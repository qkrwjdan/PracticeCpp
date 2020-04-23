#include <iostream>
#include <cstring>
using namespace std;

#include "AccountHandler.h"

int main() {
    int inputNum = 0;
    AccountHandler h1;

    while(1){
        h1.ShowMenu();
        cout << "원하시는 메뉴를 선택하세요";
        cin >> inputNum;
        cout << endl;
        switch(inputNum){
            case 1:
                h1.MakeAccount();
                break;
            case 2:
                h1.Deposit();
                break;
            case 3:
                h1.Withdraw();
                break;
            case 4:
                h1.searchAll();
                break;
            case 5:
                return 0;
            default:
                cout<<"유효하지 않습니다. 다시 입력하세요."<<endl;
        }
    }


}


