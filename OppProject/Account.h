//
// Created by macbook air on 2020-04-23.
//

#ifndef OPPPROJECT_ACCOUNT_H
#define OPPPROJECT_ACCOUNT_H

class Account{
private:
    char * name;
    int ID;
    int Money;
public:
    Account(char * name,int ID,int money);

    Account(const Account & copy);

    int GetID() const;

    virtual void Deposit(int money);

    int GetMoney() const;

    void SetMoney(int money);

    int Withdraw(int money);

    virtual void ShowAccInfo() const;

    ~Account();

};


#endif //OPPPROJECT_ACCOUNT_H
