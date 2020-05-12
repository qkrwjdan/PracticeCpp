#include <stdio.h>

int main() {
    int i=1;
    int result=0;

    while (i<101)
    {
        result+=i;
        i++;
    }
    printf("Summation of natural number from 1 to 100 is %d\n",result);

    i = 0;result = 0;
    do
    {
        result+=i;
        i++;
    } while (i<101);

    printf("Summation of natural number from 1 to 100 is %d\n",result);


    result = 0;
    for (i=1;i<101;i++)
    {
        result+=i;
    }

    printf("Summation of natural number from 1 to 100 is %d\n",result);

    return 0;
}

