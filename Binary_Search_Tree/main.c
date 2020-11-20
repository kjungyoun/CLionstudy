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
    new->data = data;
    new->right = new->left = NULL;
    return new;
}

void insert(tree *t,node *n, int data){
    if(n == NULL){
        t->root = newNode(data);
        return;
    }

   if(n->data < data) { // 오른쪽에 삽입
       if (n->right == NULL) {
           n->right = newNode(data);
       } else insert(t, n->right, data);
   }else{ //왼쪽에 삽입
       if(n->left == NULL)
           n->left = newNode(data);
       else insert(t,n->left,data);
   }
}

int count = 0;

void search(node *n, int num){
    if(n == NULL) return;
    if(n->data == num) return ;

    if(n->data > num){
        count ++;
        printf("%d ", n->data);
        search(n->left, num);
    }else{
        count ++;
        printf("%d ",n->data);
        search(n->right,num);
    }
}

int main() {
    int size, num;
    scanf("%d %d ",&size, &num);

    int data[size];
    for(int i=0; i < size; i++ ){
        scanf("%d",&data[i]);
    };

    tree t;
    init(&t);

    for(int j=0; j < size; j++){
        insert(&t,t.root,data[j]);
    }
    search(t.root, num);
    printf("\n%d",count);

    return 0;
}
