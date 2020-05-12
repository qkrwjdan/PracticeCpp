#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i<7; i++) {
        //앞에 ABC...을 출력하는 부분
        for (j = 0; j<7 - i; j++)
            printf("%c ", (char)(65 + j));
        //공백을 출력하는 부분
        for (j = i * 2 - 1; j>0; j--)
            printf("  ");
        //뒤에 ABC...을 출력하는 부분
        for (j = 6 - i; j > -1; j--) {
            if (j != 6)
                printf("%c ", (char)(65 + j));
        }
        printf("\n");
    }

    return 0;
}