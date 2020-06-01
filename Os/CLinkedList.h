//
// Created by macbook air on 2020-05-30.
//

#ifndef OS_CLINKEDLIST_H
#define OS_CLINKEDLIST_H

#define TRUE 1
#define FALSE 0

#include "object.h"

typedef Folder * Data;

typedef struct _node{
    Data data;
    struct _node * next;
}Node;

typedef struct _CLL{
    Node * head;
    Node * tail;
    Node * before;
    int numOfData;
}CList;

typedef CList List;

void ListInit(List * plist);
void LInsert(List * plist,Data data);
Data LRemove(List * plist);
int LCount(List * plist);


#endif //OS_CLINKEDLIST_H
