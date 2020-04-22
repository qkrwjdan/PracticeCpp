////
//// Created by macbook air on 2020-04-22.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//namespace RISK_LEVEL{
//    enum{
//        RISK_A,RISK_B,RISK_C
//    };
//}
//
//class Employee{
//private:
//    char name[100];
//public:
//    Employee(char * name){
//        strcpy(this->name,name);
//    }
//
//    void ShowYourName() const{
//        cout<<"name : "<<name<<endl;
//    }
//
//    virtual int GetPay() const = 0;
//
//    virtual void ShowSalaryInfo() const = 0;
//
//};
//
//class PermanentWorker : public Employee{
//private:
//    int salary;
//public:
//    PermanentWorker(char * name, int salary) : Employee(name),salary(salary){ }
//
//    virtual int GetPay() const{
//        return salary;
//    }
//
//    virtual void ShowSalaryInfo() const{
//        ShowYourName();
//        cout<<"salary : "<<GetPay()<<endl<<endl;
//    }
//
//};
//
//class TemporaryWorker : public Employee{
//private:
//    int workTime;
//    int payPerHour;
//public:
//    TemporaryWorker(char * name, int pay) : Employee(name),payPerHour(pay),workTime(0){}
//
//    void AddWorkTime(int time){
//        workTime += time;
//    }
//
//    virtual int GetPay() const{
//        return workTime * payPerHour;
//    }
//
//    virtual void ShowSalaryInfo() const{
//        ShowYourName();
//        cout<<"salary : "<<GetPay()<<endl<<endl;
//    }
//};
//
//class SalesWorker : public PermanentWorker{
//private:
//    int salesResult;
//    double bonusRatio;
//public:
//    SalesWorker(char * name, int money, double ratio) : PermanentWorker(name,money),bonusRatio(ratio){}
//
//    void AddSalesResult(int value){
//        salesResult += value;
//    }
//
//    virtual int GetPay() const{
//        return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
//    }
//
//    virtual void ShowSalaryInfo() const{
//        ShowYourName();
//        cout<<"salary : "<<GetPay()<<endl<<endl;
//    }
//};
//
//class ForeignSalesWorker : public SalesWorker{
//private:
//    int risk;
//public:
//    ForeignSalesWorker(char * name, int money, double ratio, int risk) : SalesWorker(name,money,ratio),risk(risk){}
//
//    virtual int GetPay() const{
//        if(risk == RISK_LEVEL::RISK_A) {
//            return (int)(SalesWorker::GetPay() * 1.3);
//        }else if(risk == RISK_LEVEL::RISK_B) {
//            return (int)(SalesWorker::GetPay() * 1.2);
//        }else if(risk == RISK_LEVEL::RISK_C){
//            return (int)(SalesWorker::GetPay() * 1.1);
//        }else{
//            cout<<"error!";
//            return 0;
//        }
//    }
//
//    virtual void ShowSalaryInfo() const{
//        ShowYourName();
//        cout<<"salary : "<<GetPay()<<endl<<endl;
//    }
//
//
//};
//
//
//class EmployeeHandler{
//private:
//    Employee * empList[50];
//    int empNum;
//public:
//    EmployeeHandler() : empNum(0){}
//
//    void AddEmployee(Employee * emp){
//        empList[empNum++] = emp;
//    }
//
//    void ShowAllSalaryInfo() const{
//
//        for(int i=0;i<empNum;i++)
//            empList[i]->ShowSalaryInfo();
//
//    }
//
//    void ShowTotalSalary() const{
//        int sum = 0;
//
//        for(int i=0;i<empNum;i++)
//            sum += empList[i]->GetPay();
//
//        cout<<"salary sum : "<<sum<<endl;
//    }
//
//    ~EmployeeHandler(){
//        for(int i=0;i<empNum;i++)
//            delete empList[i];
//    }
//};
//
//int main(void){
//    EmployeeHandler handler;
//    handler.AddEmployee(new PermanentWorker("KIM",1000));
//    handler.AddEmployee(new PermanentWorker("Lee",1000));
//
//    TemporaryWorker * alba = new TemporaryWorker("Jung",700);
//    alba->AddWorkTime(5);
//    handler.AddEmployee(alba);
//
//    SalesWorker * seller = new SalesWorker("Hong",1000,0.1);
//    seller->AddSalesResult(7000);
//    handler.AddEmployee(seller);
//
//    ForeignSalesWorker * fseller1 = new ForeignSalesWorker("Yoon",1000,0.1,RISK_LEVEL::RISK_A);
//    ForeignSalesWorker * fseller2 = new ForeignSalesWorker("Yoon",1000,0.1,RISK_LEVEL::RISK_B);
//    ForeignSalesWorker * fseller3 = new ForeignSalesWorker("Yoon",1000,0.1,RISK_LEVEL::RISK_C);
//
//    handler.AddEmployee(fseller1);
//    handler.AddEmployee(fseller2);
//    handler.AddEmployee(fseller3);
//
//    handler.ShowAllSalaryInfo();
//    handler.ShowTotalSalary();
//
//    return 0;
//}