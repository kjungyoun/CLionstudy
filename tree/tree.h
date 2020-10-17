//
// Created by Jungyoun_Kim on 2020/10/15.
//

#ifndef UNTITLED3_TREE_H
#define UNTITLED3_TREE_H


#include "node.h"

typedef struct{
    node *root;
    int size;
} tree;

void init(tree *t);
void insert(tree *t, node *n, chicken c);
void delete(node *n, int id);
chicken search(node *n, int id);
void preorder(node *n);
void inorder(node *n);
void postorder(node *n);
void traversal(void (*order)(node *n), node *n);

#endif //UNTITLED3_TREE_H
