//
// Created by macbook air on 2020-04-23.
//

#include <iostream>
#include <cstring>
#include "AccountHandler.h"
#include "NormalAcount.h"
#include "HighCreditAccount.h"

using namespace std;

AccountHandler::AccountHandler() : accNum(0){}

void AccountHandler::MakeAccount(){
    char name[NAME_LEN];
    int accNumber;
    int money;
    int choice;
    int ratio;

    cout<<"[계좌 종류 선택]"<<endl;
    cout<<"1.보통 예금계좌 2.신용신뢰계좌"<<endl;
    cout<<"선택";
    cin>>choice;

    if(choice == 1)
        cout<<"[보통 예금계좌 개설]"<<endl;
    else if(choice == 2)
        cout<<"[신용 신뢰계좌 개설]"<<endl;

    cout << "이름을 입력하세요 : ";
    cin >> name;
    cout << "계좌번호를 입력하세요 : ";
    cin >> accNumber;
    cout<<"입금하실 금액을 입력하세요 : ";
    cin >> money;
    cout<<"이자율 : ";
    cin>>ratio;

    if(choice == 1){
        accArr[accNum] = new NormalAccount(name,accNumber,money,ratio);
    }
    else if(choice == 2){
        int rank;
        cout<<"신용등급 : (1toA,2toB,3toC) ";
        cin>>rank;
        accArr[accNum] = new HighCreditAccount(name,accNumber,money,ratio,rank);
    }

    accNum += 1;

    cout << "새로운 계좌가 생성되었습니다." << endl;

}
void AccountHandler::ShowMenu() const{
    cout << "---------------------------"<<endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입금 " << endl;
    cout << "3. 출금 " << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료 " << endl;
    cout << "---------------------------"<<endl;
}

void AccountHandler::Deposit(){
    cout << "입금하실 계좌의 계좌번호를 입력하세요." << endl;
    int ID;
    cin >> ID;
    cout << "입금하실 금액을 입력하세요." << endl;
    int money;
    cin >> money;

    for(int i=0;i<accNum;i++){
        if(accArr[i]->GetID() == ID){
            accArr[i]->Deposit(money);
            cout<<"입금이 완료되었습니다."<<endl;
            return;
        }
    }
    cout<<"유효하지 않은 ID입니다."<<endl<<endl;
}

void AccountHandler::Withdraw(){
    cout << "출금하실 계좌의 계좌번호를 입력하세요." << endl;
    int ID;
    cin >> ID;
    cout << "출금하실 금액을 입력하세요." << endl;
    int money;
    cin >> money;

    for(int i=0;i<accNum;i++){
        if(accArr[i]->GetID() == ID){
            accArr[i]->Withdraw(money);
            cout<<"출금이 완료되었습니다."<<endl;
            return;
        }
    }

    cout<<"유효하지 않은 ID입니다."<<endl<<endl;
}

void AccountHandler::searchAll(){
    for(int i=0;i<accNum; i++){
        accArr[i]->ShowAccInfo();
    }
}

AccountHandler::~AccountHandler(){
    for(int i=0;i<accNum;i++){
        delete accArr[i];
    }
}