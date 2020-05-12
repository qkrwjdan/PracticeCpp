#include <stdio.h>

int main(){
    printf("1)\n");
    int arr[10] = {};
    int i,tmp=0,idx = 0;

    printf("Enter 10 numbers");

    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    tmp = arr[0];
    for(i=1;i<10;i++){
        if(tmp < arr[i]) {
            tmp = arr[i];
            idx = i;
        }
    }

    printf("The max : %d\n",tmp);
    printf("The location of max : %d",idx);

    printf("2)\n");
    int a,b;
    while(a != b){
        printf("input a");
        scanf("%d",&a);
        printf("input b");
        scanf("%d",&b);
        if(a > b)
            printf("bigger one : %d",a);
        else if(b > a)
            printf("bigger one : %d",b);
    }
    int menu;
    int num1, num2;

    while(true){
        printf("1.add 2.subtract 3.multiply 4. divide 5. quit\n");
        printf("selec operation\n");
        scanf("%d",menu);
        printf("enter two numbers\n");
        scanf("%d %d",&num1,&num2);

        if(menu == 1){
            printf("sum : %d",num1 + num2);
        }else if(menu == 2){
            printf("sub : %d",num1 - num2);
        }else if(menu == 3){
            printf("mul : %d",num1 * num2);
        }else if(menu == 4){
            printf("div : %d",num1 / num2);
        }else if(menu == 5){
            break;
        }else{
            printf("retry\n");
        }
    }

    return 0;

}