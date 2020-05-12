main(){
    message();
}
message() {
    printf("Happy C/C++ programming!\n");
}

//오류위치 : 1번째줄 -> stdio.h를 include해줘야 한다.
//오류위치 : 1번째줄 -> main함수의 반환형을 명시해주어야 한다.
//오류위치 : 1번째줄 -> message함수의 선언이 main함수 이전에 있어야 한다.
//오류위치 : 4번째줄 -> message함수의 반환형을 명시해주어야 한다.