//#include <stdio.h>
//
//struct student{
//    int ID;
//    int age;
//    char gender;
//    int Korean;
//    int English;
//    int Math;
//};
//
//int main(){
//
//    struct student sArr[3];
//
//    printf("Enter student ID, age, gender(M/F), and scores for 3 students\n");
//    for(int i=0;i<3;i++){
//        printf("student %d:",i+1);
//        scanf("%d %d %c %d %d %d",&sArr[i].ID,&sArr[i].age,&sArr[i].gender,&sArr[i].Korean,&sArr[i].English,&sArr[i].Math);
//    }
//
//    printf("The score report\n");
//
//    for(int i=0;i<3;i++){
//        printf("student %d:",i+1);
//        printf("student ID: %d,age: %d,gender: %c\n",sArr[i].ID,sArr[i].age,sArr[i].gender);
//        printf("Korean: %d,English: %d, Math: %d, Total: %d\n",sArr[i].Korean,sArr[i].English,sArr[i].Math,sArr[i].Korean+sArr[i].English+sArr[i].Math);
//    }
//
//    return 0;
//}