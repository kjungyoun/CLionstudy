//
// Created by JungYoun_Kim on 2020/10/08.
//

#ifndef DOUBLELIST_DOUBLE_LINKED_LIST_H
#define DOUBLELIST_DOUBLE_LINKED_LIST_H

#include "chicken.h"

typedef chicken element;

typedef struct node { // 데이터 저장 영역
    struct node *prev;
    element data;
    struct node *next;
} node;

typedef struct { // 노드 연결 영역
    node *head;
    unsigned int size;
} dlist;

void init(dlist *list);
void insert(dlist *list, unsigned int pos, element item);
void insert_first(dlist *list, element item);
void insert_last(dlist *list, element item);
element delete(dlist *list, unsigned int pos);
element delete_first(dlist *list);
element delete_last(dlist *list);
void print_list(dlist *list);



#endif //DOUBLELIST_DOUBLE_LINKED_LIST_H
