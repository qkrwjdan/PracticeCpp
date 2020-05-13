#include <stdio.h>

int get_min(int x, int y){
    if(x < y)
        return x;
    else
        return y;
}

int main(){
    int a = 10;
    int b = 12;

    int result = get_min(a,b);
    printf("%d",result);
    return 0;
}