//
// Created by Jungyoun_Kim on 2020/10/15.
//

#ifndef UNTITLED3_NODE_H
#define UNTITLED3_NODE_H

#include "chicken.h"

typedef struct node{
    struct node *left;
    struct node *right;
    struct node *parent;
    chicken data;
} node;

#endif //UNTITLED3_NODE_H
