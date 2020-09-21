#include <stdio.h>

#define SIZE_MAX 7
typedef char* element;

element stack[SIZE_MAX];
int top = -1;
int stack_count = 0;

int is_full(){
    if(top == SIZE_MAX-1) return 1;
    else return 0;
}

int is_empty(){
    if(top == -1) return 1;
    else return 0;
}

void push(element item){
    if(is_full()){
        printf("%s님을 죽였습니다. 스택 최대치를 초과하여 스택에 쌓이지 않습니다.\n", item);
        return;
    }
    stack[++top] = item;
    stack_count++;
    printf("%s님을 죽였습니다. 스택으로 쌓입니다.\n",item);
}

element pop(){
    if(is_empty()) printf("stack is empty\n");
    return stack[top--];
}

element peek(){
    if(is_empty()) printf("stack is empty\n");
    return stack[top];
}

void death(){
    for(int i = 0; i <= (top+1)/2; i++) pop();
    printf("르블랑님이 죽었습니다. 스택이 절반으로 깎입니다.\n");
    for(int i=0; i<= top; i++) printf("현재 스택 : %s\n", stack[top-i]);
}

int main() {

    push("소라카"); //소라카
    push("애쉬"); //애쉬
    death(); //소라카
    push("티모"); // 소라카 티모
    push("릴리아"); //소라카 티모 릴리아
    push("카사딘"); //소라카 티모 릴리아 카사딘
    death(); //소라카 티모
    push("티모"); //소라카 티모 티모
    push("애쉬"); //소라카 티모 티모 애쉬
    push("소라카"); //소라카 티모 티모 애쉬 소라카
    push("릴리아"); //소라카 티모 티모 애쉬 소라카 릴리아
    push("티모"); //소라카 티모 티모 애쉬 소라카 릴리아 티모
    push("애쉬"); //소라카 티모 티모 애쉬 소라카 릴리아 티모
    push("소라카"); //소라카 티모 티모 애쉬 소라카 릴리아 티모
    push("릴리아"); //소라카 티모 티모 애쉬 소라카 릴리아 티모
    death(); //소라카 티모 티모 애쉬
    push("카사딘"); //소라카 티모 티모 애쉬 카사딘

    printf("Game Over(최종 스택) : \n");
    for(int i=0; i<= top; i++){
        printf("%s\n", stack[top-i]);
    }
}
