//
// Created by JungYoun_Kim on 2020/10/17.
//

#include "bar_linked_list.h"
#include <stdlib.h>
#include <stdio.h>

void init_list(list *l){
    l->size = 0;
    l->head = NULL;
};
void insert(list *l, unsigned int pos,element data){
    node *new = (node *)malloc(sizeof(node));
    new->data = data;
    new->next=NULL;
    new->pre=NULL;
    if(l->head == NULL) l->head = new;
    else if(pos==0){
        new->next = l->head;
        l->head->pre= new;
        l->head = new;
    }else{
        node *p = l->head;
        for(int i=0; i < pos-1; i++) p = p->next;
        new->next = p->next;
        if(p->next != NULL) p->next->pre = new;
        p->next = new;
        new->pre = p;

    }
    l->size += 1;
};
void insert_first(list *l, element data){
    insert(l,0,data);
};
void insert_last(list *l, element data){
    insert(l,l->size,data);
};
void print_list(list *l){
    for (node *p = l->head; p != NULL; p=p->next){
        print_barbell(p->data);
    }
}