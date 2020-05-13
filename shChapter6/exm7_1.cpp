#include <stdio.h>

int pow(int n){
    int i;
    int result = 1;
    for(i=0;i<n;i++){
        result = result * n;
    }

    return result;
}

int main(){
    int n = 4;
    int result = pow(n);

    printf("%d",result);
    return 0;

}