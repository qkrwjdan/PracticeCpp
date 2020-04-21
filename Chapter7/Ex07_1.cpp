////
//// Created by macbook air on 2020-04-21.
////
//
//#include <iostream>
//using namespace std;
//
//class Car{
//private:
//    int gasolineGauge;
//public:
//    Car() : gasolineGauge(0){}
//
//    Car(int gasoline) : gasolineGauge(gasoline){}
//
//    int GetgasolineGauge(){
//        return gasolineGauge;
//    }
//};
//
//class HybridCar : public Car{
//private:
//    int electricGauge;
//public:
//    HybridCar() : electricGauge(0){}
//
//    HybridCar(int gasoline) : Car(gasoline), electricGauge(0){}
//
//    HybridCar(int gasoline,int electric) : Car(gasoline), electricGauge(electric){}
//
//    int GetElecGauge(){
//        return electricGauge;
//    }
//
//};
//
//class HybridWaterCar : public HybridCar{
//private:
//    int waterGauge;
//public:
//    HybridWaterCar() : waterGauge(0){}
//
//    HybridWaterCar(int gasoline) : HybridCar(gasoline),waterGauge(0){}
//
//    HybridWaterCar(int gasoline,int elec) : HybridCar(gasoline,elec),waterGauge(0){}
//
//    HybridWaterCar(int gasoline,int elec,int water) : HybridCar(gasoline,elec), waterGauge(water){}
//
//    void ShowCurrentGauge(){
//        cout<<"잔여 가솔린 : "<<GetgasolineGauge()<<endl;
//        cout<<"잔여 전기량 : "<<GetElecGauge()<<endl;
//        cout<<"잔여 워터량 : "<<waterGauge<<endl;
//    }
//
//};
//
//int main(){
//
//
//    HybridWaterCar h1;
//    HybridWaterCar h2(10);
//    HybridWaterCar h3(10,20);
//    HybridWaterCar h4(10,20,30);
//
//    h1.ShowCurrentGauge();
//    h2.ShowCurrentGauge();
//    h3.ShowCurrentGauge();
//    h4.ShowCurrentGauge();
//
//
//
//
//    return 0;
//}