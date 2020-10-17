//
// Created by JungYoun_Kim on 2020/10/08.
//

#include <stdlib.h>
#include <stdio.h>
#include "double_linked_list.h"

void init(dlist *list) {
    list->head = NULL;
    list->size = 0;
}

void insert(dlist *list, unsigned int pos, element item) {
    node *new = (node *)malloc(sizeof(node));
    new->data = item;
    new->prev = NULL;
    new->next = NULL;

    if(list->head == NULL) {
        list->head = new;
    } else if(pos == 0){
        new->next = list->head;
        list->head->prev = new;
        list->head = new;
    } else {
        node *p = list->head;
        for(int i=0; i<pos-1; i++) p = p->next;

        new->next = p->next;
        if(p->next != NULL) p->next->prev = new;
        p->next = new;
        new->prev = p;
    }

    list->size += 1;
}
void insert_first(dlist *list, element item) {
    insert(list, 0, item);
}
void insert_last(dlist *list, element item) {
    insert(list, list->size, item);
}
element delete(dlist *list, unsigned int pos){
    node *removed;
    if(list->head == NULL) ;
    else if(pos == 0){
        removed = list->head;
        list->head = removed->next;
        list->head->prev = NULL;
        free(removed);
    }else{
        node *removed;
        node *p = list->head;
        for(int i=0; i<pos-1; i++) p = p->next;
        removed = p->next;
        p->next = removed->next;
        if(removed->next != NULL) removed->next->prev = p;
        free(removed);
    }
    list->size -= 1;
};
element delete_first(dlist *list){
    delete(list, 0);
};
element delete_last(dlist *list){
    delete(list, list->size-1);
};

void print_list(dlist *list){
    for (node *p = list->head; p != NULL; p=p->next){
        printf("%s , %d\n",p->data.name, p->data.price);
    }
}