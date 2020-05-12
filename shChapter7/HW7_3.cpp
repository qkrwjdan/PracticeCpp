#include <stdio.h>

int get_max(int, int);

int get_max(int, int, int);

int main() {
    int max1, max2;
    int x = 2, y = 5, z = -2;

    max1 = get_max(x, z);
    max2 = get_max(x, y, z);

    printf("The max value of the 1st get_max(): %d\n", max1);
    printf("The max value of the 2nd get_max(): %d\n", max2);
    return 0;
}

int get_max(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int get_max(int x, int y, int z) {
    if(x > y){
        if(x > z){
            return x;
        }else{
            return z;
        }
    }else{
        if(y > z)
            return y;
        else
            return z;
    }
}