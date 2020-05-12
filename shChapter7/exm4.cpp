#include <stdio.h>

void display(void);

int main(){

    printf("How about learning C language?\n");
    display();

    return 0;
}

void display(void){
    printf("It's all right so far.\n");
    main();
}