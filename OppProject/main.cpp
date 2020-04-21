#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;
const int ARR_LEN = 100;



void MakeAccount();
void ShowMenu();
void Withdraw();
void Deposit();
void searchAll();

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

    void Deposit(int money){
        this->Money += money;
    }

    int Withdraw(int money){
        if(money > this->Money){
            return 0;
        }
        this->Money -= money;
        return money;
    }

    void ShowAccInfo() const{
        cout<<"ID : "<<ID<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"money : "<<Money<<endl;
    }

    ~Account(){
        delete []name;
    }

};

//typedef struct _Account{
//    char name[NAME_LEN];
//    int ID;
//    int Money;
//}Account;

Account * accArr[ARR_LEN];
int accNum = 0;

int main() {
    int inputNum = 0;

    while(1){
        ShowMenu();
        cout << "원하시는 메뉴를 선택하세요";
        cin >> inputNum;
        cout << endl;
        switch(inputNum){
            case 1:
                MakeAccount();
                break;
            case 2:
                Deposit();
                break;
            case 3:
                Withdraw();
                break;
            case 4:
                searchAll();
                break;
            case 5:
                return 0;
            default:
                cout<<"유효하지 않습니다. 다시 입력하세요."<<endl;
        }
    }


}

void MakeAccount(){
    char name[NAME_LEN];
    int accNumber;
    int money;

    cout << "이름을 입력하세요 : ";
    cin >> name;
    cout << "계좌번호를 입력하세요 : ";
    cin >> accNumber;
    cout<<"입금하실 금액을 입력하세요 : ";
    cin >> money;

    accArr[accNum] = new Account(name,accNumber,money);

    accNum += 1;

    cout << "새로운 계좌가 생성되었습니다." << endl;

}

void ShowMenu(){
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

