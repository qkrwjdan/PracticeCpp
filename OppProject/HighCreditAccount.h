//
// Created by macbook air on 2020-04-23.
//

#ifndef OPPPROJECT_HIGHCREDITACCOUNT_H
#define OPPPROJECT_HIGHCREDITACCOUNT_H
#include <iostream>
#include "Account.h"
#include "BankingCommonDecl.h"

using namespace std;

class HighCreditAccount : public Account{
private:
    int rank;
    int ratio;
public:
    HighCreditAccount(char * name,int ID,int money,int ratio, int rank) : Account(name,ID,money){
        this->ratio = ratio;
        this->rank = rank;

        if(rank == AccountRank::A)
            this->ratio += 7;
        else if(rank == AccountRank::B)
            this->ratio += 4;
        else if(rank == AccountRank::C)
            this->ratio += 2;
    }

    virtual void Deposit(int money){
        int total = GetMoney() + money;
        SetMoney(total * (100+ratio) / 100);
    }

    virtual void ShowAccInfo() const{
        Account::ShowAccInfo();
        cout<<"rank : "<<rank<<endl;
        cout<<"ratio : "<<ratio<<endl;
    }
};

#endif //OPPPROJECT_HIGHCREDITACCOUNT_H
