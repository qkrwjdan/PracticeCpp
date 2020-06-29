//#include <stdio.h>
//
//int get_gcd(int num1, int num2){
//
//    int tmp;
//
//    while (num1){
//        if (num1 < num2){
//            tmp = num1;
//            num1 = num2;
//            num2 = tmp;
//        }
//        num1 = num1 - num2;
//    }
//    return num2;
//}
//
//int get_lcm(int num1,int num2){
//    return num1 * num2 / get_gcd(num1,num2);
//}
//
//void gcd(int x, int y, int *p_lcm,int * p_gcd){
//    *p_lcm = get_lcm(x,y);
//    *p_gcd = get_gcd(x,y);
//}
//
//int main(){
//    int num1=0,num2=0;
//    int nLcm = 0;
//    int nGcd = 0;
//    int * pLcm = &nLcm;
//    int * pGcd = &nGcd;
//
//    printf("2개의 정수를 입력하시오:");
//    scanf("%d %d",&num1,&num2);
//
//    gcd(num1,num2,pLcm,pGcd);
//    printf("최소공배수(lcm) : %d\n",nLcm);
//    printf("최대공약수(gcd) : %d\n",nGcd);
//
//    return 0;
//}