#include <stdio.h>


int get_integer(void) {
    int n;
    printf("integer value: ");
    scanf("%d", &n);
    return n;
}

int main(){

    int n = get_integer();
    printf("%d",n);

    return 0;
}