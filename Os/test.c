//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char * splitString(char const * stringToSplit,char splitChar) {
//    /*
//     * 구분자로 문자열을 자르는 함수.
//     * char (*List)[10] = (char(*)[10])splitString(name,'/'); 로 리스트를 받는다.
//     *
//     * while(List[i][0] != '\0'){
//     *     printf("%s\n",List[i]);
//     * }
//     * 이런식으로 사용한다.
//     *
//     */
//
//    int index = 0;
//    static char Path[10][10] = {'\0',};
//    int num = 0;
//    int pathIndex = 0;
//
//    if (stringToSplit[index] == splitChar) {
//        index++;
//        while (stringToSplit[index] != '\0') {
//
//            while ( (stringToSplit[index] != splitChar) && (stringToSplit[index] != '\0')) {
//
//                Path[num][pathIndex++] = stringToSplit[index++];
//
//            }
//
//            num++;
//            pathIndex = 0;
//            index++;
//
//        }
//    }
//    else{
//        while (stringToSplit[index] != '\0') {
//            while ( (stringToSplit[index] != splitChar) && (stringToSplit[index] != '\0')) {
//
//                Path[num][pathIndex++] = stringToSplit[index++];
//
//            }
//
//            num++;
//            pathIndex = 0;
//            index++;
//
//        }
//    }
//
//    return Path;
//}
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