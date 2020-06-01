//
// Created by macbook air on 2020-05-30.
//

#ifndef OS_OBJECT_H
#define OS_OBJECT_H

#define MAX_path 100
#define MAX_obj 100
#define MAX_char 100
#define MAX_items 100

/*
 * common attributes
 * 1. type : -,d
 * 2. authority : w(write), r(read), x(access) for user, group, others(with binary)
 * 3. ownership : just print os os(default)
 * 4. file bytes : byte
 * 5. last modified date : (ex) Apr 27 10:58
 * 6. file/directory name : name + format
 * +
 * 7. the number of included file/dir : int
 * 9. current path -> super important for both file and directory struct
 *
 * 10. point array for included things
 *
 * 8. for file,contents : char array created by cat instruction
 */

//typedef struct Object{
//    char type; // file = '-' or dir = 'd'
//    char authority[10]; //
//    char ownership[2][10]; //
//    int bytes;
//    char last[20];
//    char name[10];
//
//    int children;
//    char current[MAX_path];
//    struct Object * pnt_array[MAX_obj];
//
//    char contents[MAX_char]; // for file created by cat instruction
//}object;

typedef struct Folder {
    char type;
    char authority[10];
    char * ownership[2];
    int bytes;
    char last_modified[20];
    char name[10];

    int children;
    struct Object * ptr_array[MAX_items];
}Folder;

typedef struct File {
    char type;
    char authority[10];
    char * ownership[2];
    int bytes;
    char last_modified[20];
    char name[10];

    int children;
    struct Object* ptr_array[MAX_items];

    char contents[MAX_char];
}File;

Folder* root;
Folder* now_folder;
File* now_file;

#endif //OS_OBJECT_H
