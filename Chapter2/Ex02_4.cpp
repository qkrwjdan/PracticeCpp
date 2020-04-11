//
// Created by macbook air on 2020-04-11.
//

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void){
    char str1[] = "Sample~";
    char str2[] = "+ Second Sample!";
    char str3[30];

    cout<<strlen(str1)<<endl;
    cout<<strcat(str1,str2)<<endl;
    strcpy(str3,str1);
    cout<<str3<<endl;

    if(strcmp(str1,str3) == 0)
        cout<<"str1 과 str3 은 같다!"<<endl;

    srand(time(NULL));

    for(int i=0;i<5;i++){
        cout<<i+1<<" 번째 : "<<rand() % 100<<endl;
    }


}