#include <stdio.h>

int main() {
    int c = 3;
    switch (c) {
        case 'v':
            printf("case v\n");
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