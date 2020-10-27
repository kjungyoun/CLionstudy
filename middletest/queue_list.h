//
// Created by JungYoun_Kim on 2020/10/23.
//

#ifndef MIDDLETEST_QUEUE_LIST_H
#define MIDDLETEST_QUEUE_LIST_H

#include "node.h"

typedef struct list{
    node *head;
    int size;
}list;


typedef list queue;

void initQueue(queue *q, queue *a, queue *b, queue *c);
void enqueue(queue *q, user data);
user dequeue(queue *q);


#endif //MIDDLETEST_QUEUE_LIST_H
