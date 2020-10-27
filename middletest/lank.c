//
// Created by JungYoun_Kim on 2020/10/26.
//

#include "lank.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void init_lank(lank *l, lank *a, lank *b, lank *c, lank *d, lank *e){
    l->head = NULL;
    l->size = 0;
    a->head = NULL;
   a->size = 0;
    b->head = NULL;
    b->size = 0;
    c->head = NULL;
    c->size = 0;
    d->head = NULL;
    d->size = 0;
    e->head = NULL;
    e->size = 0;
};
void push(lank *l, queue *data){ // 각 랭크 큐안에 4개의 포지션 큐를 삽입 (큐 안에 큐)
    lankNode *new = (lankNode *)malloc(sizeof(lankNode));
    new->data = data;
    new->prev = NULL;
    new->next = NULL;
    if(l->head == NULL) l->head = new;
    else{
        lankNode *p = l->head;
        for(int i=0; i<l->size-1; i++) p = p->next;
        new->next = p->next;
        p->next = new;
        new->prev = p;
    }
    l->size += 1;
};

void enqueueData(lank *l, user data){
    // 각 유저 정보에서 포지션 별로 구분해 서로 다른 큐에 저장
    int data1 = strcmp(data.position, "상단");
    int data2 = strcmp(data.position, "중단");
    int data3 = strcmp(data.position, "하단");
    int data4 = strcmp(data.position, "옆구리");
    if(data1 == 0){
        queue *k = l->head->data;
        enqueue(k, data);
    }else if(data2 == 0){
        queue *k= l->head->next->data;
        enqueue(k, data);
    }else if(data3 == 0){
        queue *k = l->head->next->next->data;
        enqueue(k, data);
    }else if(data4 ==0){
        queue *k = l->head->next->next->next->data;
        enqueue(k, data);
    }
    scan(l); // 데이터 입력마다 해당 랭크의 포지션 별 인원 확인 매칭
};

void scan(lank *l){ // 랭크별 포지션 인원이 2명 이상 모였는지 확인 및 모든 포지션에 2명 이상이면 매칭
    int sum = 0;
    lankNode *p = l->head;
    do{
        if(p->data->size >= 2){
        sum += 1;
        p = p->next;
        }
        else break;
    }while(p != NULL);

    if(sum == 4){ // 포지션 별로 2명 이상 모였으면 해당 인원으로 매칭 후 출력 및 큐에서 데이터 삭
        lankNode *p = l->head;
        char *grade = p->data->head->data.lank;
        printf("--------------------------매칭------------------------------\n");
        printf("매치 랭크: ");
        printf("[%s]\n",grade); // 매칭 등급 표시
        printf("치킨      vs      짜장\n");
        do{ // 각 포지션 별로 2개의 유저만 추출
            printMatch(dequeue(p->data),dequeue(p->data));
            p = p->next; // 해당 등급의 다음 포지션을 가리킴
            printf("\n");
        }while(p != NULL);
    }

};


void printRemainAll(lank *a, lank *b, lank *c, lank *d, lank *e, lank *f){
    lankNode *p = a->head;
    printf("--------------------------시스템 종료------------------------------\n");
    printf("[돌]랭크 남은 인원:\n");
    do{
        if(p->data->size == 0) ;
        else{
            for(node *k= p->data->head; k != NULL; k = k->next) printRemainUser(k->data);
        }
        p = p->next;
    }while(p!=NULL);
    printf("\n");
    printf("\n");

    lankNode *w = b->head;
    printf("[동]랭크 남은 인원:\n");
    do{
        if(w->data->size == 0) ;
        else{
            for(node *k= w->data->head; k != NULL; k = k->next) printRemainUser(k->data);
        }
        w = w->next;
    }while(w!=NULL);
    printf("\n");
    printf("\n");

    lankNode *r = c->head;
    printf("[은]랭크 남은 인원:\n");
    do{
        if(r->data->size == 0) ;
        else{
            for(node *k= r->data->head; k != NULL; k = k->next) printRemainUser(k->data);
        }
        r = r->next;
    }while(r!=NULL);
    printf("\n");
    printf("\n");

    lankNode *t = d->head;
    printf("[금]랭크 남은 인원:\n");
    do{
        if(t->data->size == 0) ;
        else{
            for(node *k= t->data->head; k != NULL; k = k->next) printRemainUser(k->data);
        }
        t = t->next;
    }while(t!=NULL);
    printf("\n");
    printf("\n");

    lankNode *y = e->head;
    printf("[우라늄]랭크 남은 인원:\n");
    do{
        if(y->data->size == 0) ;
        else{
            for(node *k= y->data->head; k != NULL; k = k->next) printRemainUser(k->data);
        }
        y = y->next;
    }while(y!=NULL);
    printf("\n");
    printf("\n");

    lankNode *u = f->head;
    printf("[비브라늄]랭크 남은 인원:\n");
    do{
        if(u->data->size == 0) ;
        else{
            for(node *k= u->data->head; k != NULL; k = k->next) printRemainUser(k->data);
        }
        u = u->next;
    }while(u!=NULL);
    printf("\n");
    printf("\n");
};