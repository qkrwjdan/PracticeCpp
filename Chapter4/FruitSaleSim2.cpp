////
//// Created by macbook air on 2020-04-14.
////
//
//#include <iostream>
//using namespace std;
//
//class FruitSeller{
//private:
//    const int APPLE_PRICE;
//    int numOfApple;
//    int myMoney;
//
//public:
//    FruitSeller(int price, int num, int money) : APPLE_PRICE(price),numOfApple(num),myMoney(money){
//        //empty
//    }
//
//    int SaleApples(int money){
//        int num = money / APPLE_PRICE;
//        numOfApple -= num;
//        myMoney += money;
//        return num;
//    }
//
//    void ShowSaleResult() const{
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
//    FruitBuyer(int money) : myMoney(money),numOfApples(0){
//        //empty
//    }
//
//    void BuyApples(FruitSeller &seller, int money){
//        numOfApples += seller.SaleApples(money);
//        myMoney -= money;
//    }
//
//    void ShowBuyResult() const{
//        cout<<"현재 잔액 : "<<myMoney<<endl;
//        cout<<"사과 개수 : "<<numOfApples<<endl;
//    }
//};
//
//int main(void){
//    FruitSeller seller(1000,20,0);
//    FruitBuyer buyer(5000);
//    buyer.BuyApples(seller,5000);
//
//    seller.ShowSaleResult();
//    buyer.ShowBuyResult();
//    return 0;
//}