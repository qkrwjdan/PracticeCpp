//
// Created by macbook air on 2020-04-23.
//

#ifndef OPPPROJECT_ACCOUNTHANDLER_H
#define OPPPROJECT_ACCOUNTHANDLER_H

#include "Account.h"
#include "BankingCommonDecl.h"

class AccountHandler{
private:
    Account * accArr[ARR_LEN];
    int accNum;

public:

    AccountHandler();

    void MakeAccount();

    void ShowMenu() const;

    void Deposit();

    void Withdraw();

    void searchAll();

    ~AccountHandler();

};

#endif //OPPPROJECT_ACCOUNTHANDLER_H
