#include <stdio.h>

int main(){
    int menu=0;
    int food=0;
    int last=0;
    int drink=0;
    printf("Select a menu\n");
    printf("1. food 2. drink\n");
    scanf("%d",&menu);

    switch(menu){
        case 1:
            printf("you have selected food. which food?\n");
            printf("1.Korean 2.American 3.Chinese \n");
            scanf("%d",&food);
            switch(food){
                case 1:
                    printf("You have selected an Korean food. Which Korean food?\n");
                    printf("1. Rice 2. Bulgogi\n");
                    scanf("%d",&last);
                    if(last == 1)
                        printf("Enjoy your Rice\n");
                    else
                        printf("Enjoy your Bulgogi\n");
                    break;
                case 2:
                    printf("You have selected an American food. Which American food?\n");
                    printf("1. Hamburger 2. Salad\n");
                    scanf("%d",&last);
                    if(last == 1)
                        printf("Enjoy your Hamburger\n");
                    else
                        printf("Enjoy your Salad\n");
                    break;
                case 3:
                    printf("You have selected an Chinese food. Which Chinese food?\n");
                    printf("1. Noodle 2. Dimsum\n");
                    scanf("%d",&last);
                    if(last == 1)
                        printf("Enjoy your Noodle\n");
                    else
                        printf("Enjoy your Dimsum\n");
                    break;
            }
            break;
        case 2:
            printf("you have selected drink. which drink?\n");
            printf("1.Cola 2.Orange juice 3.Water \n");
            scanf("%d",&drink);
            if(drink == 1)
                printf("Enjoy Your Cola");
            else if(drink == 2)
                printf("Enjoy Your Orange juice");
            else if(drink == 3)
                printf("Enjoy Your Water");

            break;
    }
return 0;
}