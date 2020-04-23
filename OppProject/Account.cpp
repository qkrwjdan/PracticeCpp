//
// Created by macbook air on 2020-04-23.
//
#include <iostream>
#include <cstring>
#include "Account.h"
using namespace std;

Account::Account(char * name,int ID,int money):ID(ID),Money(money){
    this->name = new char[strlen(name) + 1];
    strcpy(this->name,name);
}

Account::Account(const Account & copy) : ID(copy.ID),Money(copy.Money){
    name = new char[strlen(copy.name) + 1];
    strcpy(name,copy.name);
}

int Account::GetID() const{
    return this->ID;
}

void Account::Deposit(int money){
    this->Money += money;
}

int Account::GetMoney() const{
    return Money;
}

void Account::SetMoney(int money){
    this->Money = money;
}

int Account::Withdraw(int money){
    if(money > this->Money){
        return 0;
    }
    this->Money -= money;
    return money;
}

void Account::ShowAccInfo() const{
    cout<<"ID : "<<ID<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"money : "<<Money<<endl;
}

Account::~Account(){
    delete []name;
}