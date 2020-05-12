//#include <stdio.h>
//
//int main() {
//    float a = 3.5;
//    switch (a) {
//        case 0.5:
//            printf("The art of C\n");
//            break;
//        case 1.5:
//            printf("The spirit of C\n");
//            break;
//        case 2.5:
//            printf("See through C\n");
//            break;
//        case 3.5:
//            printf("Simply C\n");
//    }
//    return 0;
//}
//switch~case 문의 argument는 int or char형만 가능하다
#include <stdio.h>

int main() {
    int a = 3;
    switch (a) {
        case 5:
            printf("The art of C\n");
            break;
        case 1:
            printf("The spirit of C\n");
            break;
        case 2:
            printf("See through C\n");
            break;
        case 3:
            printf("Simply C\n");
    }
    return 0;
}