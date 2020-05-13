#include <iostream>
using namespace std;

void noArgNoRe(){
    printf("No argument, No return value\n");
}

int noArgYesRe(){
    printf("No argument, Yes return value\n");
    return 1;
}

void yesArgNoRe(int a){
    int i=0;
    for(i =0;i<a;i++){
        printf("Yes argument, No return value\n");
    }
}

int yesArgYesRe(int a){
    int i=0;
    for(i =0;i<a;i++){
        printf("Yes argument, Yes return value\n");
    }
    return a;
}

int main(){
    int a = 3;

    noArgNoRe();
    int b = noArgYesRe();
    printf("%d\n",b);
    yesArgNoRe(a);
    int c = yesArgYesRe(a);
    printf("%d\n",c);

    return 0;
}