//
// Created by Jungyoun_Kim on 2020/10/15.
//

#include <stdlib.h>
#include "tree.h"

void init(tree *t) {
    t->root = NULL;
    t->size = 0;
}

void insert(tree *t, node *n, chicken c) {
    if(n == NULL) {
        node *temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = temp->parent = NULL;
        temp->data = c;
        t->root = temp;
        t->size += 1;
        return;
    }

    if(n->data.id > c.id) {
        // 왼쪽에 삽입
        if(n->left == NULL) {
            node *temp = (node *)malloc(sizeof(node));
            temp->left = temp->right = temp->parent = NULL;
            temp->data = c;
            n->left = temp; //자식 노드가 없음
            t->size += 1;
        }
        else insert(t, n->left, c);     //자식 노드가 있음
    } else {
        // 오른쪽에 삽입
        if(n->right == NULL) {
            node *temp = (node *)malloc(sizeof(node));
            temp->left = temp->right = temp->parent = NULL;
            temp->data = c;
            n->right = temp;
            t->size += 1;
        }
        else insert(t, n->right, c);
    }
}
void delete(node *n, int id) {

}
chicken search(node *n, int id) {

}

void preorder(node *n) {
    if(n == NULL) return;
    print(n->data);
    preorder(n->left);
    preorder(n->right);
}
void inorder(node *n) {
    // LVR
    if(n == NULL) return;
    inorder(n->left);
    print(n->data);
    inorder(n->right);
}
void postorder(node *n) {
    if(n == NULL) return;
    postorder(n->left);
    postorder(n->right);
    print(n->data);
}

void traversal(void (*order)(node *n), node *n) {
    order(n);
}