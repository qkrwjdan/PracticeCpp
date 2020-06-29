//#include <stdio.h>
//
//struct student{
//    int number;
//    char name[20];
//    double grade;
//};
//
//struct student list[100];
//
//struct student get_max_stu(int size){
//
//    struct student super_stu;
//    int i=0;
//
//    super_stu = list[0];
//
//
//    for(i=1;i<size;i++){
//        if(list[i].grade > super_stu.grade)
//            super_stu = list[i];
//    }
//
//    return super_stu;
//}
//
//int main(void){
//
//    int size;
//    size = sizeof(list)/sizeof(list[0]);
//    struct student super_stu;
//    int number;
//
//    printf("전체 학생 수를 입력하세요.");
//    scanf("%d",&number);
//
//    for(int i=0;i<number;i++){
//        printf("%d번째 학생의 정보를 입력하세요.(ex. 학번: 20120001, 이름 : 정지영, 학점: 4.2)\n",i+1);
//        scanf("%d %s %lf",&list[i].number,list[i].name,&list[i].grade);
//    }
//
//    super_stu = get_max_stu(size);
//
//
//    printf("평점이 가장 높은 학생은 (이름: %s, 학번: %d, 평점: %lf)입니다.\n",super_stu.name,super_stu.number,super_stu.grade);
//
//    return 0;
//}