#include <stdio.h>
#include <string.h>

typedef struct phone{
    char name[20];
    char number[20];
}PHONE;

void insert(PHONE book[]);
void output(PHONE book[]);
void delete(PHONE book[]);
int find_index(PHONE book[],char *name);

int list_num;

int main(){
    int menu;
    PHONE phone_list[50];


    while(1){
        printf("======전화번호 관리======\n");
        printf("1.보기 2.등록 3.삭제 4.끝내기\n");
        printf("메뉴를 선택하세요 :");
        scanf("%d",&menu);
        printf("\n");

        switch(menu){
            case 1:
                output(phone_list);
                break;
            case 2:
                insert(phone_list);
                break;
            case 3:
                delete(phone_list);
                break;
            case 4:
                printf("프로그램을 종료합니다.\n");
                return 0;
        }

    }
}

void insert(PHONE book[]){
    printf("등록할 이름?");
    scanf("%s",book[list_num].name);
    printf("전화번호?");
    scanf("%s",book[list_num].number);
    printf("%s 정보 등록 완료!\n",book[list_num].name);
    list_num = list_num+1;
    printf("\n");
}

void output(PHONE book[]){
    printf("<< 전화번호목록 >>\n");
    for(int i=0;i<list_num;i++){
        printf("%s  %s\n",book[i].name,book[i].number);
    }
    printf("\n");
}

void delete(PHONE book[]){

    char name[20];
    int idx;
    printf("삭제할 이름?");
    scanf("%s",name);
    idx = find_index(book,name);
    if(idx == -1){
        printf("삭제하려는 정보가 없습니다.\n");
    }
    else{
        for(int i=idx;i<list_num-1;i++){
            book[i] = book[i+1];
        }
        strcpy(book[list_num].name,"\0");
        strcpy(book[list_num].number,"\0");
        list_num--;
        printf("%s 정보 삭제 완료!",name);
    }
    printf("\n");
}

int find_index(PHONE book[],char *name){
    for(int i=0;i<list_num;i++){
        if(strcmp(book[i].name,name) == 0)
            return i;
    }
    return -1;
}