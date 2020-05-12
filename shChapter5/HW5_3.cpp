#include <stdio.h>

int max(int x,int y,int z);

int main() {
    int x, y,z;

    printf("1)Enter three numbers\n");
    scanf("%d %d %d", &x, &y,&z);
    printf("%d is greatest.\n\n",max(x,y,z));

    printf("2)Enter two numbers\n");
    scanf("%d %d", &x, &y);

    if (y%x == 0)
        printf("%d is a factor of %d\n\n",x,y);
    else
        printf("%d is not a factor of %d\n\n", x, y);

    printf("Enter a menu number: rice(1), bread(2), drink(3), noodle(4)\n");
    scanf("%d", &x);
    if (x == 1)
        printf("You have selected a rice\n");
    else if (x == 2)
        printf("You have selected a bread\n");
    else if (x == 3)
        printf("You have selected a drink\n");
    else if (x == 4)
        printf("You have selected a noodle\n");
    else
        printf("There is no such menu");

    return 0;
}

int max(int x, int y, int z) {
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}