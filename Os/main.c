#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "object.h"
#include "CLinkedList.h"

#define MAX_ARGV 256
#define MAX_CMD 64



int pwd(List * pathList);
int cd(List * pathList, char * name);

void split_cmd(char argv[],char cmd[],char remain[])
{
    int cmdlen=0,remainlen=0,i=0;

    while(argv[i]!=' '&&argv[i]!='\0'){
        cmd[cmdlen++]=argv[i++];
    }

    i++;
    cmd[cmdlen]='\0';

    while(argv[i]!='\0'){
        remain[remainlen++]=argv[i++];
    }

    remain[remainlen]='\0';

    for(i=0;i<MAX_ARGV;i++)
        argv[i]='\0';
}

int main() {

    Folder rootFolder;
    memset(&rootFolder,0,sizeof(Folder));

    root = &rootFolder;

    Folder User;
    memset(&User,0,sizeof(Folder));

    Folder obj1;
    memset(&obj1, 0, sizeof(Folder));
    Folder obj2;
    memset(&obj2, 0, sizeof(Folder));
    Folder obj3;
    memset(&obj3, 0, sizeof(Folder));
    Folder obj4;
    memset(&obj4, 0, sizeof(Folder));
    File obj5;
    memset(&obj4, 0, sizeof(Folder));

    printf("first step success\n");
    rootFolder.type = 'd';
    User.type = 'd';
    obj1.type = 'd';
    obj2.type = 'd';
    obj3.type = 'd';
    obj4.type = 'd';
    obj5.type = '-';


    rootFolder.ptr_array[0] = (struct Object *)&User;
    rootFolder.children++;
    User.ptr_array[0] = (struct Object *)&obj1;
    User.children++;

    obj1.ptr_array[0] = (struct Object *)&obj2;
    obj1.children++;
    obj2.ptr_array[0] = (struct Object *)&obj3;
    obj2.children++;
    obj3.ptr_array[0] = (struct Object *)&obj4;
    obj3.children++;
    obj4.ptr_array[0] = (struct Object *)&obj5;
    obj4.children++;

    printf("second step success\n");


    strcpy(rootFolder.name,"root");
    strcpy(User.name,"User");

    strcpy(obj1.name,"park");
    strcpy(obj2.name,"jeong");
    strcpy(obj3.name,"shin");
    strcpy(obj4.name,"kim");
    strcpy(obj5.name,"lsd");

    printf("third step success\n");

    //pathList 를 초기화 시켜주는 과정
    List pathList;
    ListInit(&pathList);
    LInsert(&pathList,&rootFolder);

    pwd(&pathList);
    root = pathList.tail->data;
    now_folder = pathList.tail->data;
    //여기까지

    char input[100];
    char argv[MAX_ARGV]={'\0'};

    while(TRUE){
        char cmd[MAX_CMD] = {'\0'}, remain[MAX_ARGV-MAX_CMD] = {'\0'};
        printf("%s : %s macbookair$ ","jeong",now_folder->name);
        gets(argv);

        if(strcmp(argv,"exit") == 0)
            break;

        split_cmd(argv,cmd,remain);
        printf("%s - %s\n",cmd,remain);
        if(!strcmp(cmd,"cd")){
            cd(&pathList,remain);
        }else if(!strcmp(cmd,"pwd")){
            pwd(&pathList);
        }
    }

    return 0;

}


int pwd(List * pathList){

    Node * ptr;
    ptr = pathList->head;

    while(ptr != NULL){
        printf("/");
        printf("%s",ptr->data->name);
        ptr = ptr->next;
    }

    printf("\n");
    return 1;
}

int cd(List * pathList, char * name){

    //인자 유효성 검사 필.........

    if(strcmp(name,"..") == 0){ //상위폴더 이동
        LRemove(pathList);
        now_folder = pathList->tail->data;
        return 1;
    }
    else if(strcmp(name,".") == 0){ // 암것도 안하기

    }
    else if(strcmp(name,"~") == 0 || strcmp(name,"$ HOME") == 0 || strcmp(name,"") == 0 ){ // 사용자 Home directory로 이동
        if(now_folder == root){
            cd(pathList,"User");
        }

        while(pathList->before->data != root){
            LRemove(pathList);
            now_folder = pathList->tail->data;
        }
        return 1;

    }
    else if(strcmp(name,"/") == 0){ // 최상위 디렉토리로 이동
        while(pathList->tail->data != root){
            LRemove(pathList);
            now_folder = pathList->tail->data;
        }
        return 1;
    }
    else if(strcmp(name,"-") == 0){ // 이전 경로로 이동

    }
    else{

        int index = 0;

        if(name[index] == '/'){ // 절대경로인 경우

            

        }





        int childNum = now_folder->children;

        for(int i=0;i<childNum;i++){

            Folder * tmp = (Folder *)(now_folder->ptr_array[i]);

            if(strcmp(tmp->name,name) == 0){

                if(tmp->type == 'd') {
                    LInsert(pathList,tmp);
                    now_folder = pathList->tail->data;
                    return 1;
                }else{
                    printf("It is file\n");
                    return 0;
                }
            }
        }

        printf("here is no such file\n");
        return 0;
    }

}
