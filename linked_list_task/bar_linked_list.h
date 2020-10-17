//
// Created by JungYoun_Kim on 2020/10/17.
//

#ifndef LINKED_LIST_TASK_BAR_LINKED_LIST_H
#define LINKED_LIST_TASK_BAR_LINKED_LIST_H

#include "node.h"

typedef struct {
    node *head;
    int size;
}list;

void init_list(list *l);
void insert(list *l, unsigned int pos,element data);
void insert_first(list *l, element data);
void insert_last(list *l, element data);
void print_list(list *l);

#endif //LINKED_LIST_TASK_BAR_LINKED_LIST_H
