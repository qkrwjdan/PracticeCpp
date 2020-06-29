//#include <stdio.h>
//
//void sum(int x, int y, int *p_sum, int *p_diff){
//    *p_sum = x + y;
//    *p_diff = x - y;
//}
//
//int main(){
//
//    int nSum = 0;
//    int nDiff = 0;
//
//    int * pSum = &nSum;
//    int * pDiff = &nDiff;
//
//    int n1=0,n2=0;
//
//    printf("2개의 정수를 입력하시오: ");
//    scanf("%d %d",&n1,&n2);
//
//    sum(n1,n2,pSum,pDiff);
//
//    printf("원소들의 합 = %d\n",nSum);
//    printf("원소들의 차 = %d\n",nDiff);
//
//    return 0;
//}