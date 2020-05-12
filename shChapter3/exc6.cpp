#include <stdio.h>
#define START_DAY (0)
#define DAYS_OF_MONTH (31)

int main() {
    int day, date;
    printf("===================================\n");
    printf("Sun. Mon. Tue. Wen. Thu. Fri. Sat. \n");
    printf("===================================\n");
    for (day = 0; day < START_DAY; day++)
        printf(" "); // print space
    for (date = 1; date <= DAYS_OF_MONTH; date++) {
        if (day == 7) {
            day = 0;
            printf("\n");
        }
        day++;
        printf("%4d ", date);
    }
    printf("\n===================================\n");
    return 0;
}