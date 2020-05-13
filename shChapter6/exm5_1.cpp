#include <stdio.h>

int get_two_integer_plus(void) {
    int n1;
    int n2;
    printf("integer value: ");
    scanf("%d", &n1);
    printf("integer value: ");
    scanf("%d", &n2);
    return n1 + n2;
}

int main(){

    int n = get_two_integer_plus();
    printf("%d",n);

    return 0;
}