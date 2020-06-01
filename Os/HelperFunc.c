#include <stdio.h>

char * splitString(char const * stringToSplit,char splitChar) {
    /*
     * 구분자로 문자열을 자르는 함수.
     *
     * char (*List)[10] = (char(*)[10])splitString(name,'/'); 로 리스트를 받는다.
     *
     * while(List[i][0] != '\0'){
     *     printf("%s\n",List[i]);
     * }
     *
     * 이런식으로 사용한다.
     *
     */

    int index = 0;
    static char Path[10][10] = {'\0',}; // 리스트의 길이는 10, 한 단어의 길이를 10으로 선언한다.
    int num = 0;
    int pathIndex = 0;

    if (stringToSplit[index] == splitChar) {
        index++;
        while (stringToSplit[index] != '\0') {
            while ( (stringToSplit[index] != splitChar) && (stringToSplit[index] != '\0')) {
                Path[num][pathIndex++] = stringToSplit[index++];
            }
            num++;
            pathIndex = 0;
            index++;
        }
    }
    else{
        while (stringToSplit[index] != '\0') {
            while ( (stringToSplit[index] != splitChar) && (stringToSplit[index] != '\0')) {
                Path[num][pathIndex++] = stringToSplit[index++];
            }
            num++;
            pathIndex = 0;
            index++;
        }
    }

    return Path;
}
