//#include <stdio.h>
//
//int main() {
//    int a = 3, b = 4, c;
//    c = b - a;
//    switch (c) {
//        case 1 || 2:
//            printf("God gives me a chance to change things.");
//            break;
//        case a || b:
//            printf("God give me a chance to run my show.");
//            break;
//    }
//    return 0;
//}

//case의 argument에 수식 쓸 수 없음
//case의 argument에 변수를 쓸 수 없다.

#include <stdio.h>

int main() {
    int a = 3, b = 4, c;
    c = b - a;
    switch (c) {
        case 1:
        case 2:
            printf("God gives me a chance to change things.");
            break;
        case 3:
        case 4:
            printf("God give me a chance to run my show.");
            break;
    }
    return 0;
}