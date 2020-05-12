#include <stdio.h>

void display(void);
void display2(void);

int main(){

    display();

    return 0;
}

void display(void){
    printf("It's all right so far.\n");
    display2();
}

void display2(void){
    printf("How about learning C and C++ language?\n");
    display();
}