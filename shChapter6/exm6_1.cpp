#include <stdio.h>

int triArea(int width, int height){
    return width * height / 2;
}

int main(){
    int width = 5;
    int height = 10;
    int area = triArea(width,height);

    printf("%d",area);
    return 0;
}