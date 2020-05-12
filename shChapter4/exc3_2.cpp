#include <stdio.h>

int main() {
    int ch = 'a' + 'b';
    switch (ch) {
        case 'a':
        case 'b':
            printf("You typed b\n");
        case 'A':
            printf("You typed A\n");
        case 'a' + 'b':
            printf("You typed a and b\n");
    }
    return 0;
}