////
//// Created by macbook air on 2020-04-08.
////
//
//#include <iostream>
//
//int main(void){
//    int sum = 0;
//    int num;
//
//    for(int i=0;i<5;i++){
//        std::cout << i+1 << "번째 정수 입력 : ";
//        std::cin >> num;
//        sum += num;
//    }
//    std::cout << "합계 : " << sum << std::endl;
//
//    char name[100];
//    std::cout << "이름을 입력하세요 : ";
//    std::cin >> name;
//    std::cout << "이름 : " << name << std::endl;
//
//    std::cout << "출력하고 싶은 구구단을 입력하세요 : ";
//    std::cin >> num;
//    for(int i=1;i<=9;i++){
//        std::cout<< num << " * " << i << " = " << num*i << std::endl;
//    }
//
//    int inputNum = 0;
//    int salary;
//    while(true){
//        std::cout << "판매 금액을 만원단위로 입력(-1 to end) : ";
//        std::cin >> inputNum;
//        if(inputNum == -1)
//            break;
//        salary = 50 + inputNum * 0.12;
//        std::cout << "이번달 급여 : " << salary << std::endl;
//    }
//    std::cout << "프로그램을 종료합니다." << std::endl;
//
//
//}