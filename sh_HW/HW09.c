//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int TwoDArray[20][20] = {0,};
//
//void fill(){
//    for(int i=0;i<20;i++){
//        for(int j=0;j<20;j++){
//            TwoDArray[i][j] = rand() % 100;
//        }
//    }
//
//}
//
//void show(){
//
//    for(int i=0;i<20;i++){
//        for(int j=0;j<20;j++){
//            printf("%3d",TwoDArray[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int rowSum(int rowNum){
//    int sum = 0;
//    for(int i=0;i<20;i++){
//        sum = sum + TwoDArray[i][rowNum];
//    }
//    return sum;
//}
//
//int colSum(int colNum){
//    int sum = 0;
//    for(int i=0;i<20;i++){
//        sum = sum + TwoDArray[colNum][i];
//    }
//    return sum;
//}
//
//int diagonalSum(){
//    int sum = 0;
//    for(int i=0;i<20;i++){
//        sum = sum + TwoDArray[i][i];
//    }
//    return sum;
//}
//
//int backDiagonalSum(){
//    int sum = 0;
//    for(int i=0;i<20;i++){
//        sum = sum + TwoDArray[20-i][i];
//    }
//    return sum;
//}
//
//int rowMax(int rowNum){
//    int max = TwoDArray[0][rowNum];
//    for(int i=0;i<20;i++){
//        if(max < TwoDArray[i][rowNum])
//            max = TwoDArray[i][rowNum];
//    }
//
//    return max;
//}
//
//int colMax(int colNum){
//    int max = TwoDArray[colNum][0];
//    for(int i=0;i<20;i++){
//        if(max < TwoDArray[colNum][i])
//            max = TwoDArray[colNum][i];
//    }
//
//    return max;
//}
//
//int maxRow(){
//    int sum[20] = {0,};
//    int max = 0;
//    int maxIndex = 0;
//    int i=0,j=0;
//
//    for(i=0;i<20;i++){
//        for(j=0;j<20;j++){
//            sum[i] = sum[i] + TwoDArray[i][j];
//        }
//    }
//    max = sum[0];
//
//    for(i=0;i<20;i++){
//        if(sum[i] > max){
//            max = sum[i];
//            maxIndex = i;
//        }
//    }
//
//    return maxIndex;
//}
//
//int maxCol(){
//    int sum[20] = {0,};
//    int max = 0;
//    int maxIndex = 0;
//    int i=0,j=0;
//
//    for(i=0;i<20;i++){
//        for(j=0;j<20;j++){
//            sum[i] = sum[i] + TwoDArray[j][i];
//        }
//    }
//    max = sum[0];
//
//    for(i=0;i<20;i++){
//        if(sum[i] > max){
//            max = sum[i];
//            maxIndex = i;
//        }
//    }
//
//    return maxIndex;
//}
//
//
//int main(){
//    int num;
//
//    srand(time(NULL));
//
//    fill();
//    show();
//
//    printf("Enter index of row for row_sum(): ");
//    scanf("%d",&num);
//    printf("Sum of the row: %d\n\n",rowSum(num));
//
//    printf("Enter index of col for col_sum(): ");
//    scanf("%d",&num);
//    printf("Sum of the column: %d\n\n",rowSum(num));
//
//    printf("diagonal sum: %d\n\n",diagonalSum());
//    printf("backward diagonal sum : %d\n\n",backDiagonalSum());
//
//    printf("enter index of row for row_max(): ");
//    scanf("%d",&num);
//    printf("Maximum value of row : %d\n\n",rowMax(num));
//
//    printf("enter index of col for col_max(): ");
//    scanf("%d",&num);
//    printf("Maximum value of col : %d\n\n",colMax(num));
//
//    printf("Row indox of the largest sum : %d\n\n",maxRow());
//
//    printf("Column index of the largest sum : %d\n\n",maxCol());
//
//    return 0;
//
//}