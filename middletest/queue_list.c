//
// Created by JungYoun_Kim on 2020/10/23.
//

#include "queue_list.h"
#include <stdlib.h>

void initQueue(queue *q, queue *a, queue *b, queue *c){
    q->size = 0;
    q->head = NULL;
    a->size = 0;
    a->head = NULL;
    b->size = 0;
    b->head = NULL;
    c->size = 0;
    c->head = NULL;
};
void enqueue(queue *q, user data){
    node *new = (node *)malloc(sizeof(node));
    new->data = data;
    new->next = NULL;
    new->prev = NULL;
    if(q->head == NULL) q->head = new;
    else{
        node *p = q->head;
        for(int i =0; i < q->size -1; i++) p = p->next;
        new->next = p->next;
        p->next = new;
        new->prev = p;
    }
    q->size += 1;
};

user dequeue(queue *q){
    if(q->head == NULL) ;
    else{
        node *removed = q->head;
        user data = removed->data;
        q->head = q->head->next;
        free(removed);
        q->size -= 1;
        return data;
    }
};
