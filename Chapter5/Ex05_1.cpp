//
// Created by macbook air on 2020-04-16.
//
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS{
    enum {
        CLERK,SENIOR,ASSIST,MANAGER
    };
}

class NameCard{

    char * name;
    char * companyName;
    char * phoneNum;
    int position;

public:
    NameCard(const NameCard & copy) : position(copy.position){
        int len = strlen(copy.name) + 1;
        name = new char[len];
        strcpy(name,copy.name);

        len = strlen(copy.companyName) + 1;
        companyName = new char[len];
        strcpy(companyName,copy.companyName);

        len = strlen(copy.phoneNum) + 1;
        phoneNum = new char[len];
        strcpy(phoneNum,copy.phoneNum);
    }

    NameCard(char * n, char * cN, char * pN, int p) : position(p){
        int len = strlen(n) + 1;
        name = new char[len];
        strcpy(name,n);

        len = strlen(cN) + 1;
        companyName = new char[len];
        strcpy(companyName,cN);

        len = strlen(pN) + 1;
        phoneNum = new char[len];
        strcpy(phoneNum,pN);
    }

    void ShowNameCardInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"company : "<<companyName<<endl;
        cout<<"phone : "<<phoneNum<<endl;
        cout<<"position : ";

        switch(position){
            case COMP_POS::CLERK :
                cout<<"사원"<<endl;
                break;
            case COMP_POS::SENIOR :
                cout<<"주임"<<endl;
                break;
            case COMP_POS::ASSIST :
                cout<<"대리"<<endl;
                break;
            case COMP_POS::MANAGER :
                cout<<"과장"<<endl;
                break;
        }

    }

    ~NameCard(){
        delete []name;
        delete []companyName;
        delete []phoneNum;
    }

};

int main(void){
    NameCard manClerk("Lee","ABCEng","010-1111-2222",COMP_POS::CLERK);
    NameCard manSENIOR("Kee","ABCEng2","010-1111-2222",COMP_POS::SENIOR);
    NameCard manAssist("Ree","ABCEng3","010-1111-2222",COMP_POS::ASSIST);
    NameCard manManager("Qee","ABCEng4","010-1111-2222",COMP_POS::MANAGER);

    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    manManager.ShowNameCardInfo();

    cout<<"Show Copy"<<endl;
    NameCard copy1 = manClerk;
    copy1.ShowNameCardInfo();
    NameCard copy2 = manSENIOR;
    copy2.ShowNameCardInfo();
    return 0;

}

