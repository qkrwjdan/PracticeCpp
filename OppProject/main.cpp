#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;


typedef struct _Account{
    char name[NAME_LEN];
    int ID;
    int Money;
}Account;

void MakeAccount();
void ShowMenu();
void Input();
void Deposit();
void searchAll();


Account accArr[100];
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
                Input();
                break;
            case 3:
                Deposit();
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

    cout << "이름을 입력하세요 : ";
    cin >> name;
    cout << "계좌번호를 입력하세요 : ";
    cin >> accNumber;

    strcpy(accArr[accNum].name,name);
    accArr[accNum].ID = accNumber;
    accArr[accNum].Money = 0;

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

void Input(){
    cout << "입금하실 계좌의 인덱스를 입력하세요." << endl;
    int idx;
    cin >> idx;
    cout << "입금하실 금액을 입력하세요." << endl;
    int money;
    cin >> money;

    accArr[idx].Money += money;
    cout << "입금이 완료되었습니다." << endl;

}

void Deposit(){
    cout << "출금하실 계좌의 인덱스를 입력하세요." << endl;
    int idx;
    cin >> idx;
    cout << "출금하실 금액을 입력하세요." << endl;
    int money;
    cin >> money;

    accArr[idx].Money -= money;
    cout << "출금이 완료되었습니다." << endl;

}

void searchAll(){
    for(int i=0;i<accNum; i++){
        cout << "이름 : " << accArr[i].name << endl;
        cout << "계좌번호 : " << accArr[i].ID << endl;
        cout << "잔액 : " << accArr[i].Money << endl;
    }
}
