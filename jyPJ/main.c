//// 2017112184 정지영 프기실 중간고사 문제 1
//#include <stdio.h>
//
//int is_leap(int year);//윤년계산함수
//int num_of_day(int year); // 날짜계산함수
//int day_of_week(int year, int month, int result, int b[]); // 요일계산함수
//
//
//int main() {
//   int year, month;
//   int count = 0;
//   int total_day[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }; // 지정된 달의 수
//
//
//   printf("년도와 달을 입력하시오 : ");
//   scanf("%d %d", &year, &month);
//
//   printf("\n\n     %d년 %d월     \n\n", year, month);
//   printf("=====================\n");
//   printf("일 월 화 수 목 금 토\n");
//   printf("---------------------\n");
//
//   count = day_of_week(year, month, num_of_day(year), total_day) - 1; // 달력의 날짜가 시작하는 자리를 알기 위함
//
//   if (count != -1) {
//      for (int i = 0; i < count; i++) {
//         printf("   ");
//      }
//   }
//   else if (count == -1) {
//      for (int i = 0; i < 6; i++) {
//         printf("   ");
//         count = 6;
//      }
//   }
//
//   for (int i = 1; i < total_day[month]+1; i++) {
//      if (count % 7 == 0) {
//         printf("\n");
//      }
//      printf("%2d ",i);
//      count++; // 다음주로 넘어가기 위한 count증가.
//   }
//   printf("\n");
//   printf("=====================\n");
//}
//
//int is_leap(int year) { // 윤년이면 1, 윤년이 아니면 0 반환
//   if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//      return 1;
//   }
//   else
//      return 0;
//}
//
//
//int num_of_day(int year) { // 날짜 수 계산
//   if (year >= 2000) {
//      int year_num = year - 2000;
//      int leap_num = 0;
//      for (int i = year - 1; i >= 2000; i--) { // 입력받은 년도가 윤년일 수 있으므로 year-1
//         if (is_leap(i) == 1) {
//            leap_num++; // 해당 년도와 2000년 사이 윤년이 존재하므로 일 수 증가.
//         }
//      }
//      int result = year_num * 365 + leap_num;
//      return result;
//   }
//   else if (year < 2000) {
//      int year_num = 2000 - (year + 1);
//      int leap_num = 0;
//      for (int i = year + 1; i < 2000; i++) { // 입력받은 년도가 윤년일 수 있으므로 year-1
//         if (is_leap(i) == 1) {
//            leap_num++; // 해당 년도와 2000년 사이 윤년이 존재하므로 일 수 증가.
//         }
//      }
//      int result = year_num * 365 + leap_num;
//      return result;
//   }
//
//}
//
//
//
//int day_of_week(int year,int month,int result,int b[]) { // 요일 계산 함수
//    int month_result = 0;
//    int isLeap = is_leap(year);
//
//   if (isLeap) {
//      b[2] = 29; // 윤년이므로 2월 날짜 수정
//   }
//
//    for (int i = 0; i < month; i++) { // 해당 년도의 1월부터 month까지 일수 구하기.
//        month_result += b[i];
//    }
//
//   if (year >= 2000) { // 2000년도 이상인 경우
//      result = (result + month_result) % 7;
//   }
//
//   else if (year < 2000) { // 2000년도 미만인 경우
//
//      if (isLeap) { // 윤년이면 년도의 총 일수인 366에서 month까지의 일수를 빼준다.
//         month_result = 366 - month_result;
//      }
//      else
//         month_result = 365 - month_result;
//
//       result = (result + month_result) % 7; // result는 해당 월의 날이 끝나는 요일을 의미한다.
//       result = 7 - result; //시작하는 요일로 바꿔주기 위해  7 - result를 해준다.
//   }
//
//   return result;
//}