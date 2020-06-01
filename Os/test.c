//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#include "HelperFunc.h"
//
//int main() {
//
//    char name[100] = {'\0',};
//
//    printf("input name : ");
//    scanf("%s",name);
//    printf("%s\n",name);
//
//    char (*List1)[10] = (char(*)[10])splitString(name,'/');
//
//    printf("split\n");
//
//    int i=0;
//
//    while(List1[i][0] != '\0'){
//        printf("string : %s\n",List1[i]);
//        i++;
//    }
//
//    printf("정상적으로 종료됩니다.\n");
//    return 0;
//
//}
//
////
////int index = 0;
////
////if(name[index++] == '/') { // 절대경로인 경우
////
////char Path[10][10] = {'\0',};
////int num = 0;
////int pathIndex = 0;
////
////printf("absolute path\n");
////
////while (name[index] != '\0') {
////printf("input first while\n");
////while (name[index] != '/' && name[index] != '\0') {
////printf("input second While\n");
////Path[num][pathIndex++] = name[index++];
////}
////
////num++;
////pathIndex = 0;
////index++;
////
////}
////
////for (int i = 0; i < num; i++) {
////printf("string : %s ",Path[i]);
////}
////
////}