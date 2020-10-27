//
// Created by JungYoun_Kim on 2020/10/26.
//

#ifndef MIDDLETEST_LANK_H
#define MIDDLETEST_LANK_H

#include "queue_list.h"
#include "lankNode.h"

typedef struct lank{ // 등급별 4개의 큐를 저장한 연결리스트
    lankNode *head;
    int size;
}lank;
void init_lank(lank *l, lank *a, lank *b, lank *c, lank *d, lank *e);
void push(lank *l, queue *data); // 등급별 4개의 포지션 큐를 담는 함수
void enqueueData(lank *l, user data); // 각 등급별 포지션 큐에 유저 데이터를 담는 함수
void scan(lank *l); // 한 랭크 안에 각 포지션 별로 2명 이상의 유저가 있는지 확인하는 함수
void printRemainAll(lank *a, lank *b, lank *c, lank *d, lank *e, lank *f);// 모든 랭크에서 매칭되지 않고 남은 유저 전부 출력

#endif //MIDDLETEST_LANK_H
