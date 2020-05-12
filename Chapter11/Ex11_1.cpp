////
//// Created by macbook air on 2020-04-28.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Gun{
//private:
//    int bullet;
//public:
//    Gun(int bnum) : bullet(bnum){}
//
//    Gun(const Gun& ref) : bullet(ref.bullet){
//    }
//
//    void Shot(){
//        cout<<"BBANG!"<<endl;
//        bullet--;
//    }
//
//    void ShowInfo() const{
//        cout<<bullet<<endl;
//    }
//
//    Gun &operator=(const Gun& ref){
//        bullet = ref.bullet;
//    }
//
//};
//
//class Police{
//private:
//    int handcuffs;
//    Gun * pistol;
//public:
//    Police(int bnum, int bcuff) : handcuffs(bcuff){
//        if(bnum > 0)
//            pistol = new Gun(bnum);
//        else
//            pistol = NULL;
//    }
//
//    Police(const Police& ref) : handcuffs(ref.handcuffs){
//
//        if(ref.pistol == NULL)
//            this->pistol = NULL;
//        else
//            pistol = new Gun(*(ref.pistol));
//    }
//
//    Police& operator=(const Police & ref){
//        if(ref.pistol == NULL)
//            delete pistol;
//
//        if(ref.pistol != NULL){
//            this->pistol = new Gun(*(ref.pistol));
//        }else{
//            pistol = NULL;
//        }
//
//        this->handcuffs = ref.handcuffs;
//        return *this;
//    }
//
//    void Shot(){
//        if(pistol == NULL)
//            cout<<"Hut BBANG!"<<endl;
//        else
//            pistol->Shot();
//    }
//
//    void ShowInfo() const{
//        cout<<"handcuff : "<<handcuffs<<endl;
//        pistol->ShowInfo();
//    }
//
//    ~Police(){
//        if(pistol != NULL)
//            delete pistol;
//    }
//
//};
//
//int main(void){
//
//    Police p1(13,24);
//    Police p2(0,0);
//
//    p2 = p1;
//
//    p2.Shot();
//    p2.Shot();
//
//    p1.ShowInfo();
//    p2.ShowInfo();
//
//    return 0;
//}