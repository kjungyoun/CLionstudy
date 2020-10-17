//
// Created by JungYoun_Kim on 2020/10/17.
//

#include "weight_stack.h"
#include <stdlib.h>

void init_stack(stack *s){
  s->size = 0;
  s->head = NULL;
};

void push(stack *s, element data){
    node *new = (node *)malloc(sizeof(node));
    new->data = data;
    new->next = NULL;
    new->pre = NULL;
    if(s->head == NULL) s->head = new;
    else{
        node *p = s->head;
        for(int i=0; i< s->size-1; i++) p = p->next;
        new->next = p->next;
        p->next = new;
        new->pre = p;
    }
    s->size += 1;
};

element pop(stack *s){
    if(s->head == NULL) ;
    else{
        node *removed = s->head;
        for(int i=0; i < s->size-1; i++) removed = removed->next;
        element data = removed->data;
        if(removed->pre !=NULL) removed->pre->next = NULL;
        free(removed);
        s->size -= 1;
        return data;
    }
};
