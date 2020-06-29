////2017112184 정지영 기말과제1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Date { // 날짜
//    int year; // 년
//    int month; // 월
//    int day; // 일
//};
//
//struct Book { // 책
//    char book_name[20];//책이름
//    char *author;//저자
//    char publisher[20];//출판사
//    struct Date date;//날짜
//
//};
//
//
//int main() {
//
//    struct Book B1[2]; // 구조체 배열 B1
//    struct Book * B2; // 구조체 포인터 변수 B2
//
//    for (int i = 0; i<2; i++) {
//        printf("%d번째 책의 이름을 입력하세요 : ", i + 1);
//        scanf("%[^\n]s", B1[i].book_name);
//        getchar(); // input buffer 비워준다.
//
//        printf("%d번째 책의 저자를 입력하세요 : ", i + 1);
//        scanf("%[^\n]s", &B1[i].author); // 포인터 변수이므로 &
//        getchar();
//
//
//        printf("%d번째 책의 출판사를 입력하세요 : ", i + 1);
//        scanf("%[^\n]s", B1[i].publisher);
//        getchar();
//
//        printf("%d번째 날짜를 입력하세요(ex.1999 01 06) : ", i + 1);
//        scanf("%d %d %d", &B1[i].date.year, &B1[i].date.month, &B1[i].date.day);
//        getchar();
//    } // B1의 배열을 이용해 입력 받음
//
//    B2 = &B1[1]; // B2가 입력받은 B1[1]의 주소값을 가리킴
//
//    strcpy(B2->book_name, "C언어");
//
//    for (int i = 0; i<2; i++) { // 출력(B1 이용)
//        printf("==================\n");
//        printf("%d번째 책의 이름: %s\n", i + 1, B1[i].book_name);
//        printf("저자 : %s\n", &B1[i].author);
//        printf("출판사 : %s\n", B1[i].publisher);
//        printf("날짜 : %d-%d-%d\n", B1[i].date.year, B1[i].date.month, B1[i].date.day);
//        printf("==================\n");
//    }
//
//    return 0;
//}