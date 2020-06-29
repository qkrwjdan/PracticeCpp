//#include <stdio.h>
//#define SIZE 3
//
//int main(){
//    int arr1[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9};
//    int arr2[SIZE][SIZE] = {1,0,0,0,1,0,0,0,1};
//    int arr3[SIZE][SIZE] = {0,};
//    int arr4[SIZE][SIZE] = {0,};
//
//    printf("행렬 A\n");
//    for(int i=0;i<SIZE;i++){
//        for(int j=0;j<SIZE;j++){
//            printf("%3d",arr1[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("행렬 B\n");
//    for(int i=0;i<SIZE;i++){
//        for(int j=0;j<SIZE;j++){
//            printf("%3d",arr2[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("행렬 합 C\n");
//    for(int i=0;i<SIZE;i++){
//        for(int j=0;j<SIZE;j++){
//            arr3[i][j] = arr1[i][j] + arr2[i][j];
//            printf("%3d",arr3[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("행렬 곱 D\n");
//    for(int i=0;i<SIZE;i++){
//        for(int j=0;j<SIZE;j++){
//            for(int k=0;k<SIZE;k++){
//                arr4[i][j] += arr1[i][k] * arr2[k][j];
//            }
//            printf("%3d",arr4[i][j]);
//        }
//        printf("\n");
//    }
//
//
//}