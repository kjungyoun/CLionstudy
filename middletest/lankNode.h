//
// Created by JungYoun_Kim on 2020/10/26.
//

#ifndef MIDDLETEST_LANKNODE_H
#define MIDDLETEST_LANKNODE_H

#include "queue_list.h"

typedef struct lankNode{ // 상단,중단,하단,옆구리 라는 큐를 저장할 노드
    struct lankNode *next;
    struct lankNode *prev;
    queue *data; // 여기서 queue는 포인터 데이터이므로 *를 붙여준다.
}lankNode;

#endif //MIDDLETEST_LANKNODE_H
