#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;
const int ARR_LEN = 100;

namespace AccountRank{
    enum {
        A=1,B=2,C=3
    };
}

class Account{
private:
    char * name;
    int ID;
    int Money;
public:
    Account(char * name,int ID,int money):ID(ID),Money(money){
        this->name = new char[strlen(name) + 1];
        strcpy(this->name,name);
    }

    Account(const Account & copy) : ID(copy.ID),Money(copy.Money){
        name = new char[strlen(copy.name) + 1];
        strcpy(name,copy.name);
    }

    int GetID() const{
        return this->ID;
    }

    virtual void Deposit(int money){
        this->Money += money;
    }

    int GetMoney(){
        return Money;
    }

    void SetMoney(int money){
        this->Money = money;
    }

    int Withdraw(int money){
        if(money > this->Money){
            return 0;
        }
        this->Money -= money;
        return money;
    }

    virtual void ShowAccInfo() const{
        cout<<"ID : "<<ID<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"money : "<<Money<<endl;
    }

    ~Account(){
        delete []name;
    }

};

class NormalAccount : public Account{
    /*
     * 생성자를 통해서 이자비율을 등록
     */
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

class HighCreditAccount : public Account{
    /*
     *
     * 생성 과정에서 고객의 신용등급을 A,B,C로 나누고
     * A -> 7%, B -> 4%, C -> 2%
     * 개좌 개설 과정에서 초기 입금액에 대해서는 이자를 계산하지 않는다.
     * 계좌 개설 ㅣ후 별도의 입금과정을 거칠때만 이자가 발생한다.
     * 이자 계산과정에서 발생하는 소수점 이하의 금액은 무시한다.
     */
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

class AccountHandler{
private:
    Account * accArr[ARR_LEN];
    int accNum;

public:

    AccountHandler() : accNum(0){}

    void MakeAccount(){
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
    void ShowMenu() const{
        cout << "---------------------------"<<endl;
        cout << "1. 계좌개설" << endl;
        cout << "2. 입금 " << endl;
        cout << "3. 출금 " << endl;
        cout << "4. 계좌정보 전체 출력" << endl;
        cout << "5. 프로그램 종료 " << endl;
        cout << "---------------------------"<<endl;
    }

    void Deposit(){
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

    void Withdraw(){
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

    void searchAll(){
        for(int i=0;i<accNum; i++){
            accArr[i]->ShowAccInfo();
        }
    }

    ~AccountHandler(){
        for(int i=0;i<accNum;i++){
            delete accArr[i];
        }
    }

};

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


