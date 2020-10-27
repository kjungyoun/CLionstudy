//
// Created by JungYoun_Kim on 2020/10/23.
//

#ifndef MIDDLETEST_NODE_H
#define MIDDLETEST_NODE_H

#include "user.h"

typedef struct node{
    struct node *prev;
    struct node *next;
    user data;
}node;

#endif //MIDDLETEST_NODE_H
