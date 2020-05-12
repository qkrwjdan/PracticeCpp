#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char name[20] = "name";
    char age[20] = "23";
    char university[20] = "inhaUniv";

    char cpy_name[20] = "";
    char cpy_age[20] = "";
    char cpy_university[20] = "";


    int name_len = strlen(name);
    int age_len = strlen(age);
    int university_len = strlen(university);

    strcpy(cpy_name, name);
    strcpy(cpy_age,age);
    strcpy(cpy_university,university);

    strcat(name, age);
    strcat(name, university);
    strcat(cpy_name,cpy_age);
    strcat(cpy_name,cpy_university);

    cout<<"info : "<<name;
    cout<<endl;
    cout<<"cpy_info : "<<cpy_name;
    cout<<endl;

    cout<<"total length : "<<name_len<<"+"<<age_len<<"+"<<university_len<<" = "<<strlen(name)<<endl;


    return 0;
}

