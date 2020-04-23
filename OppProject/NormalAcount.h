//
// Created by macbook air on 2020-04-23.
//

#ifndef OPPPROJECT_NORMALACOUNT_H
#define OPPPROJECT_NORMALACOUNT_H
#include "Account.h"
#include <iostream>
using namespace std;

class NormalAccount : public Account{

private:
    int ratio;
public:
    NormalAccount(char * name,int ID,int money,int ratio) : Account(name,ID,money),ratio(ratio){ }

    virtual void Deposit(int money){
        int total = GetMoney() + money;
        SetMoney(total * (100+ratio) / 100);
    }

    virtual void ShowAccInfo() const{
        Account::ShowAccInfo();
        cout<<"ratio : "<<ratio<<endl;
    }

};
#endif //OPPPROJECT_NORMALACOUNT_H
