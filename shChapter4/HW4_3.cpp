#include <stdio.h>

int main() {
    char letter;

    scanf("%c", &letter);

    if (letter >= 65 && letter <= 90)
        letter = letter + 32;

    printf("%c 로 변경\n", letter);

    return 0;
}