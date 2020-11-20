#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left, *right;
}node;

typedef struct tree{
    node *root;
}tree;

void init(tree *t){
    t->root = NULL;
}

node *newNode(int data){
    node *new = (node *)malloc(sizeof(node));
    if(data == -1)new->data = NULL;
    else new->data = data;
    new->right = new->left = NULL;
    return new;
}

void insert(tree *t,node *n, int data){
    if(n == NULL){
        t->root = newNode(data);
        return;
    }

    if(n->left == NULL){
        n->left = newNode(data);
    }else if(n->right == NULL){
        n->right = newNode(data);

    }else if (n->left->left == NULL || n->left->right == NULL) {
        insert(t, n->left, data);
    }else if(n->right->left == NULL || n->right->right == NULL) {
        insert(t, n->right, data);
    }

}

int main() {
    int N;
    scanf("%d ",&N);

    int data[N];
    for(int i=0; i < N; i++ ){
    scanf("%d",&data[i]);
    };


    int min = data[0];
    tree t;
    init(&t);

    for(int j=0; j < N; j++){
        if(data[j] != -1 && data[j] < min)
            min = data[j];
        insert(&t,t.root,data[j]);
    }

    printf("%d",min);

    return 0;
}
