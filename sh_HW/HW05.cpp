//#include <stdio.h>
//#define SIZE 100
//
//int main(){
//    char arr[SIZE][SIZE] = {0,};
//    int num = 0;
//
//    printf("Write the value of N : ");
//    scanf("%d",&num);
//
//    for(int i=0;i<num;i++){
//        for(int j=0;j<num - i -1;j++){
//            arr[i][j] = ' ';
//        }
//
//        for(int k = 0;k<i+1;k++){
//            arr[i][num-k-1] = '*';
//        }
//    }
//
//    for(int i=0;i<num;i++){
//        for(int j=0;j<num;j++){
//            printf("%c",arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//
//
//
//}