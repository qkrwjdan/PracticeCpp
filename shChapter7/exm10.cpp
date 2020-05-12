int main(){
    float a = 15.5;
    char ch = 'C';
    printit(a, ch);
    return 0;
}

printit(a, ch) {
    printf("%f %c\n", a, ch);
    return;
}

//오류위치 : 1번째줄-> stdio.h를 include하지 않는다.
//오류위치 : 2번째줄-> 함수에 대한 선언을 main 함수 이전에 해줘야 한다.
//오류위치 : 8번째줄-> 반환형을 명시해주어야 한다.
//오류위치 : 8번째줄-> 함수의 매개변수에 자료형을 명시해주어야 한다.