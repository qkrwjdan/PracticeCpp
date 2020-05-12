////#include <stdio.h>
////
////int main() {
////    int temp;
////    scanf("%d",&temp);
////
////    switch (temp) {
////        case (temp <= 20):
////            printf("Ooooohhhh! Damn cool!\n");
////        case (temp > 20 && temp <= 30):
////            printf("Rain rain here again!\n");
////        case (temp > 30 && temp <= 40):
////            printf("Wish I am on Everest\n");
////        default:
////            printf("Good old nagpur weather\n");
////    }
////    return 0;
////}
////
//////case의 argument에 범위연산자를 사용할 수 없음
//
//#include <stdio.h>
//
//int main() {
//    int temp;
//    scanf("%d",&temp);
//
//    switch (temp) {
//        case 1:
//        case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:
//            printf("Ooooohhhh! Damn cool!\n");
//            break;
//        case 21:
//        case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
//            printf("Rain rain here again!\n");
//            break;
//        case 31:
//        case 32:case 33:case 34:case 35:case 36:case 37:case 38:case 39:case 40:
//            printf("Wish I am on Everest\n");
//            break;
//        default:
//            printf("Good old nagpur weather\n");
//    }
//    return 0;
//}
