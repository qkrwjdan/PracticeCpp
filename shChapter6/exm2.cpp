#include <stdio.h>

int get_max(int x, int y){
    if(x > y)
        return x;
    else
        return y;
}

int main(){
    int a = 10;
    int b = 12;

    int result = get_max(a,b);
    printf("%d",result);
    return 0;
}