#include <iostream>

using namespace std;

int sum = 0;

int saveMoney(){
    int money = 0;

    cout<<"저금할 금액 : ";
    cin>>money;

    if(money == -1)
        return -1;

    sum += money;

    return money;
}

int main(){

    int save = 0;

    while(true){
        save = saveMoney();
        if(save == -1)
            break;

        cout<<"현재까지 입금액 "<<sum<<endl<<endl;
    }

    cout<<"입금 완료"<<endl;

    return 0;
}