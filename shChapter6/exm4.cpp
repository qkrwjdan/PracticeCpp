#include <stdio.h>

void draw_rect(int side) {
    int x, y;
    for (y = 0; y < side; y++) {
        for (x = 0; x < side; x++) printf("*");
        printf("\n");
    }
    return;
}

int main(){
    int sd = 10;

    draw_rect(10);

    return 0;
}