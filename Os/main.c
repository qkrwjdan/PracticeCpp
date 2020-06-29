#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_items 10 // maximum items
#define MAX_cat 100 // maximum text length
#define MAX_path 30 // ex: a/v/d/c/d/.... string
#define MAX_name 10


/*
common attributes

   1. type : -,d
   2. authority :w(write), r(read), x(access) for user, group, others(with binary)
   3. ownership : just print os os(default)
   4. file bytes : bytes
   5. last modified date : (ex) Apr 27 10:58
   6. file/directory name : name + format
   +
   7. the number of included file/dir : int
   8. for file, contents : char array created by cat instruction
   9(could be deprecated). current path --> super important for both file and directory struct :
   10. pointer array for included things

   //void mkdir(char inputs[10+MAX_path]);//mkdir (-m -p) a/b/c/d/...
   //void cat(char inputs[8+MAX_char]);//cat (> -n ' ') title
   //void cd(char inputs[4+MAX_path]);//cd a/b/c/d/... or (cd '~' '.' '..')
   //void pwd();
   //void ls(char inputs[6]);//ls (-l -a ll)
   //void rm(char inputs[7+MAX_path]);//rm (-r -f) a/b/c/d/..
   //void cp(char inputs[14+MAX_path]);//cp (name : 9) path
   //void _find(char inputs[17+MAX_path+10]);//find path (-name -type) "..."
   //object explore(char dest[MAX_path]);
*/

typedef struct Folder{

    char type;
    char authority[10];
    char* ownership[2];
    int bytes;
    char last_modified[20];
    char name[10];
    int children;
    char* current;

    struct Folder* ptr_array[MAX_items];
    struct Folder* upper;

}Folder;

typedef struct File{

    char type;
    char authority[10];
    char* ownership[2];
    int bytes;
    char last_modified[20];
    char name[10];
    char contents[MAX_cat];//for file created by cat instruction
    char* current;
    struct Folder* upper;

}File;

Folder* root;
Folder* now_folder;

int get_blank(char* inputs);// to distinguish options with first char '-'
char* slicing(char* inputs, char* deli, int num);
void init_root();
char* get_time();
int how_many(char* inputs);
void print_Folder_info(Folder* folder);
Folder* get_named_dir(char* name);

void mkdir(char* inputs);
void cd(char* inputs);
void ls();
void pwd();
void find(char* inputs);
void explore(char* inputs);
void dfs(Folder* current);


int main(int argc, char *argv[]) {
    char* inputs;
    char* type;
    int n;

    init_root();

    /*
    printf("%c%s  ",now_folder->type, now_folder->authority);
    printf("%s %s  ",now_folder->ownership[0], now_folder->ownership[1]);
    printf("%d  ",now_folder->bytes);
    printf("%s  ",now_folder->last_modified);
    printf("%s  ",now_folder->name);
    printf("\n\n");
    */

    while(1){
        inputs = malloc(sizeof(char)*50);
        type = malloc(sizeof(char)*(n+1));

        printf("os@os-C_Implementation:$ ");
        gets(inputs);

        n = get_blank(inputs);
        strncpy(type,inputs,n);
        type[n] = '\0';

        //puts(type);


        if(!strcmp(type, "mkdir")){
            mkdir(inputs);
        }

        else if(!strcmp(type, "cat"))
            printf("cat");

        else if(!strcmp(type, "cd")){
            cd(inputs);
        }

        else if(!strcmp(type, "pwd"))
            pwd();

        else if(!strcmp(type, "ls"))
            ls();


        else if(!strcmp(type, "rm"))
            printf("rm");

        else if(!strcmp(type, "cp"))
            printf("cp");

        else if(!strcmp(type, "find"))
            find(inputs);

        printf("\n");


        free(inputs);
        free(type);

    }

    return 0;
}

int get_blank(char* inputs){// return first blank index

    int i;

    for(i=0;i<strlen(inputs);i++){
        if(inputs[i] == ' ')
            return i;
    }
}

char* slicing(char* inputs, char* deli, int num){// return substring which starts with blank_idx num
    char* result;
    int i = 1;

    result = strtok(inputs,deli);

    while(result != NULL){

        if(num == i)
            return result;

        result = strtok(NULL, deli);
        i++;
    }
}

void mkdir(char* inputs){// mkdir replica before adding multithread

    int pos;
    Folder* newp = malloc(sizeof(Folder));

    newp->current = malloc(sizeof(now_folder->current)+MAX_name+2);
    pos = get_blank(inputs);// first blank position

    if(inputs[pos+1] == '-'){
        if(inputs[pos+2] == 'm'){

        }

        else if(inputs[pos+2] == 'p'){

        }
    }

    else{

        newp->type = 'd';
        strcpy(newp->authority, "rwxr-xr-x");//default 755

        newp->ownership[0] = malloc(sizeof(char)*10);
        newp->ownership[1] = malloc(sizeof(char)*10);
        strcpy(newp->ownership[0], "os");
        strcpy(newp->ownership[1], "os");

        newp->bytes = 0;

        strcpy(newp->last_modified, get_time());
        strcpy(newp->name, slicing(inputs," ",2));

        newp->children = 0;
        newp->upper = now_folder;

        strcpy(newp->current,now_folder->current);
        strcat(newp->current,"/");
        strcat(newp->current,newp->name);

    }

    now_folder->ptr_array[now_folder->children++] = newp;// update children number and ptr_array
    strcpy(now_folder->last_modified, newp->last_modified);// update recent modified date
}

void init_root(){// initialize root
    root = malloc(sizeof(Folder));
    root->current = malloc(sizeof(char)*10);

    root->type = 'd';
    strcpy(root->authority, "rwxr-xr-x");//default 755

    root->ownership[0] = malloc(sizeof(char)*10);
    root->ownership[1] = malloc(sizeof(char)*10);
    strcpy(root->ownership[0], "root");
    strcpy(root->ownership[1], "root");

    root->bytes = 0;

    strcpy(root->last_modified, get_time());
    strcpy(root->name,"os");
    strcpy(root->current,"/home/os");

    root->children = 0;
    root->upper = NULL;
    now_folder = root;
}

void print_Folder_info(Folder* folder){// print current folder's information

    printf("%c%s  ",folder->type, folder->authority);
    printf("%s %s  ",folder->ownership[0], folder->ownership[1]);
    printf("%d  ",folder->bytes);
    printf("%s  ",folder->last_modified);
    printf("%s  ",folder->name);
    printf("\n");

    //puts(folder->current);

}

char* get_time(){// return current time in string format
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char* now;

    now = malloc(sizeof(char)*30);
    sprintf(now,"%d-%d-%d %d:%d:%d", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday,tm.tm_hour, tm.tm_min, tm.tm_sec);

    return now;
}

void cd(char* inputs){

    char* dest;
    char* tmp;
    char* bowl[10];
    int i=0;


    dest = strtok(slicing(inputs," ",2) ,"/");
    tmp = dest;

    printf("tmp : %s\n",tmp);

    while(dest != NULL){ // bowl에 문자열 저장.

        dest = strtok(NULL,"/");
        bowl[i] = dest;
        printf("bowl[%d] = %s",i,bowl[i]);

        i++;
    }

    i=0;

    if(!strcmp(tmp, ".")){ // bowl[0] = '.' -> 현재 디렉토리로 이동

        while(bowl[i]){
            now_folder = get_named_dir(bowl[i]);

            i++;
        }

    }

    else if(!strcmp(tmp, "..")){ // bowl[0] = ".." -> 상위 디렉토리로 이동
        now_folder = now_folder->upper;
    }

    else if(!strcmp(tmp, "~")){ // bowl[0] = "~" -> root 디렉토리로 이동
        now_folder = root;
    }

    else if(!strcmp(tmp, "/")){

    }

    else if(!strcmp(tmp, "-")){

    }

    else if(!strcmp(tmp, "")){

    }

    else{
        //now_folder = get_named_dir(bowl[]);
    }

}

int how_many(char* inputs){
    int cnt = 0;
    int i;

    for(i=0;i<strlen(inputs);i++){
        if(inputs[i] == '/'){
            ++cnt;
        }
    }

    return cnt;
}

Folder* get_named_dir(char* name){// return name-matched subfolder
    Folder* tmp;
    int i;

    for(i=0;i<now_folder->children;i++){
        tmp = now_folder->ptr_array[i];

        if(!strcmp(tmp->name, name))
            break;
    }

    return tmp;
}

void ls(){
    int i;

    for(i=0;i<now_folder->children;i++){

        print_Folder_info(now_folder->ptr_array[i]);

    }
}

void pwd(){

    if(now_folder){
        printf("%c%s  ",now_folder->type, now_folder->authority);
        printf("%s %s  ",now_folder->ownership[0], now_folder->ownership[1]);
        printf("%d  ",now_folder->bytes);
        printf("%s  ",now_folder->last_modified);
        printf("%s  ",now_folder->name);
        printf("\n");
    }

    else{
        printf("unvalid directory\n");
        now_folder = root;
    }
}

void explore(char* inputs){//return final destination with absolute path ex) /home/os/a

    char* dest;
    char* bowl[10];
    int i;
    Folder* result;

    now_folder = root;

    dest = slicing(inputs," ",2);
    dest = strtok(dest,"/");
    i=0;

    while(dest != NULL){
        bowl[i] = dest;
        puts(bowl[i]);
        i++;
        dest = strtok(NULL,"/");
    }


    for(i=3;i<10;i++){

        if(bowl[i]){
            now_folder = get_named_dir(bowl[i]);
        }

        else
            break;
    }

    //now_folder = now_folder->upper;
}

void find(char* inputs){//DFS with absolute path

    explore(inputs);
    //dfs(now_folder);

}

void dfs(Folder* current){
    int i;

    for(i=0;i<current->children;i++){

        if(current->ptr_array[i]){

            puts(current->ptr_array[i]->current);

            if(current->ptr_array[i]->type == '-'){
                printf(".txt\n");
            }

            else{
                dfs(current->ptr_array[i]);
            }

        }
    }
}