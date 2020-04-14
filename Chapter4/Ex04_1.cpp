////
//// Created by macbook air on 2020-04-14.
////
//
//#include <iostream>
//using namespace std;
//
//class FruitSeller{
//private:
//    int APPLE_PRICE;
//    int numOfApple;
//    int myMoney;
//
//public:
//    void InitMembers(int price, int num, int money){
//        APPLE_PRICE = price;
//        numOfApple = num;
//        myMoney = money;
//    }
//
//    int SaleApples(int money){
//        int num = money / APPLE_PRICE;
//        numOfApple -= num;
//        myMoney += money;
//        return num;
//    }
//
//    void ShowSaleResult() const {
//        cout<<" 남은 사과 : "<<numOfApple<<endl;
//        cout<<" 판매 수익 : "<<myMoney<<endl;
//    }
//};
//
//class FruitBuyer{
//    int myMoney;
//    int numOfApples;
//
//public:
//    void InitMembers(int money){
//        myMoney = money;
//        numOfApples = 0;
//    }
//
//    void BuyApples(FruitSeller &seller, int money){
//        if(money < 0)
//        {
//            cout<<"0보다 적은 돈은 없습니다."<<endl;
//            return;
//        }
//        numOfApples += seller.SaleApples(money);
//        myMoney -= money;
//    }
//
//    void ShowBuyResult() const {
//        cout<<"현재 잔액 : "<<myMoney<<endl;
//        cout<<"사과 개수 : "<<numOfApples<<endl;
//    }
//};
//
//int main(void){
//    FruitSeller seller;
//    seller.InitMembers(1000,20,0);
//    FruitBuyer buyer;
//    buyer.InitMembers(5000);
//    buyer.BuyApples(seller,5000);
//
//    seller.ShowSaleResult();
//    buyer.ShowBuyResult();
//    return 0;
//}