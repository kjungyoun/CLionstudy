#include <stdio.h>
#include<stdlib.h>

#define SIZE 100

typedef struct stack{
    int data[SIZE];
    int top;
} stack;

void init_stack(stack *s){
    s->top = -1;
}

int is_full(stack *s){
    if(s->top == SIZE -1) return 1;
    else return 0;
}

int is_empty(stack *s){
    if(s->top == -1) return 1;
    else return 0;
}

int push(stack *s, int item){
    if(is_full(s)) return 0;
    else s->data[++(s->top)] = item;
}

int pop(stack *s){
    if(is_empty(s)) exit(1);
    int item = s->data[s->top];
    s->top -=1;
    return item;
}

int peek(stack *s){
    if(is_empty(s)) exit(1);
    return s->data[s->top];
}

int main() {
    stack s;
    init_stack(&s);
    for(int i =1;i<= 10; i++) {
        push(&s,i);
    }

    printf("%d\n",peek(&s));
}
