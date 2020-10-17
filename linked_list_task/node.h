//
// Created by JungYoun_Kim on 2020/10/17.
//

#ifndef LINKED_LIST_TASK_NODE_H
#define LINKED_LIST_TASK_NODE_H

#include "barbell.h"

typedef barbell element;

typedef struct node{
    struct node *pre;
    struct node *next;
    barbell data;
}node;

#endif //LINKED_LIST_TASK_NODE_H
