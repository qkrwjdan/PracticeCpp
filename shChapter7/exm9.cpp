#include <stdio.h>

void message(void);

int main(){
    int a;
    a = message();
    return 0;
}

void message(void) {
    printf("Viruses are written in C\n");
    return;
}

//오류 위치 : 7번째 줄
//이유 : message함수는 반환값이 없는데 a 에 대입연산을 하고있다.
