#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"


void ListInit(List * plist){
    /*
     * 리스트를 초기화하는 함수.
     * 리스트를 생성한 뒤 꼭 해줘야 함
     */
    plist->numOfData = 0;
    plist->head = NULL;
    plist->tail = NULL;
    plist->before = NULL;
}

void LInsert(List * plist, Data data){
    /*
     * tail에 Data를 추가하는 함수.
     */

    Node * newNode = (Node*)malloc(sizeof(Node)); //동적할당
    newNode->data = data; //동적할당 후 초기화
    newNode->next = NULL;

    if(plist->tail == NULL){ // 첫번째 데이터를 넣을때.
        plist->tail = newNode;
        plist->head = newNode;
        plist->before = newNode;
    }
    else{ // 첫번째 이후(첫번째가 아닌 두,세번째....) 데이터를 넣을때.
        plist->tail->next = newNode;
        plist->before = plist->tail;
        plist->tail = newNode;
    }

    (plist->numOfData)++; //갯수 증가.
}

Data LRemove(List * plist){

    /*
     * tail을 삭제하는 함수.
     * tail을 삭제하고, before자리가 tail이 된다.
     * 그 후, tail의 전 노드가 before이 된다.
     */

    if(plist->head == NULL){ // 데이터가 없는 상태에서 remove를 실행하면 프로그램 종료.
        printf("There is No data\n");
        exit(111);
    }

    Node * rpos = plist->tail; // 지울 노드 : rpos
    Data rdata = rpos->data;

    if(plist->tail == plist->head){ // 노드가 하나만 있을 때 head,tail,before 전부 초기화.
        plist->head = NULL;
        plist->tail = NULL;
        plist->before = NULL;
    }
    else{ // 노드가 하나 이상일때
        plist->tail = plist->before; // tail 은 before가 된다.
        plist->before = plist->head;
        while(1){ // before의 자리를 찾는 과정.
            if((plist->before == plist->tail) || (plist->before->next == plist->tail))
                break;
            Node * tmp = plist->before;
            plist->before = tmp->next;

        }
        plist->tail->next = NULL; // tail이 가리키는 곳은 항상 NULL이여야함.
    }


    free(rpos); // 동적할당 해제
    (plist->numOfData)--; // 갯수 감소!
    return rdata;
}

int LCount(List * plist){
    return plist->numOfData;
}