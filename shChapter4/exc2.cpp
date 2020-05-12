#include <stdio.h>

int main() {
    int k, j = 2;
    switch (k = j + 1) {
        case 0:
            printf("Tailor\n");
        case 1:
            printf("Tutor\n");
        case 2:
            printf("Tramp\n");
        default:
            printf("Pure Simple Egghead\n");
    }
    return 0;
}