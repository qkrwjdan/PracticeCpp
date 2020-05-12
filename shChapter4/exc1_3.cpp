#include <stdio.h>

int main() {
    char c = 'a';

    switch (c) {
        case 'a':
            printf("case a\n");
            break;
        case 3:
            printf("case 3\n");
            break;
        case 12:
            printf("case 12\n");
            break;
        default:
            printf("default\n");
            break;
    }
    return 0;
}