#include <stdio.h>
#define MAX_QUEUE_SIZE 100
int orderCount = 0;
typedef struct chicken{
    char* name;
    unsigned int price;
} chicken;

typedef chicken element;

typedef struct {
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} Queue;

void init_queue(Queue *q){
    q->rear = -1;
    q->front =-1;
}

int is_full(Queue *q){
    if(q->rear == MAX_QUEUE_SIZE -1) return 1;
    else return 0;
}

int is_empty(Queue *q){
    if(q->front == q->rear) return 1;
    else return 0;
}

void enqueue(Queue *q, char* name, unsigned int price){
    if(is_full(q)) printf("큐가 포화 상태입니다.\n");
        q->data[++(q->rear)].price = price;
        q->data[q->rear].name = name;
        orderCount++;
}

void dequeueDel(Queue *q, int maxDel){
    if(is_empty(q)) printf("큐가 공백상태 입니다.\n");
    else if(maxDel <= orderCount) {
        for (int i = 0; i < maxDel; i++) {
            chicken item = q->data[++(q->front)];
            orderCount--;
        }
    }else{
        for(int i =0; i<orderCount; i++){
            chicken item = q->data[++(q->front)];
            orderCount--;
        }
    }
}

void priceSum(Queue *q){
    int sum = 0;
    for(int i = 0; i <= q->rear - orderCount; i++) {
        sum += q->data[i].price;
    }
    printf("현재까지 총 배달 완료 금액: %d\n", sum);
    printf("------------------------------------\n");
}

void orderList(Queue *q){
    if(is_empty(q)) ;
    printf("현재 남은 배달주문 리스트\n");
    printf("------------------------------------\n");
    for(int i = (q->front)+1; i <= q->rear; i++){
        printf("제품: %s  가격: %d\n",q->data[i].name,q->data[i].price);
    }
}


int main() {
    Queue q;
    int A =3;
    int B =2;
    int C =5;

    init_queue(&q);
    enqueue(&q,"황금올리브 치킨",18000);
    enqueue(&q,"뿌링클",19000);
    enqueue(&q,"오리엔탈파닭",17000);
    enqueue(&q,"레드콤보",18000);
    enqueue(&q,"고추 바사삭",19000);
    dequeueDel(&q,A);
    enqueue(&q,"매운간장치킨",16000);
    dequeueDel(&q,B);
    enqueue(&q,"맛초킹",17000);
    dequeueDel(&q,A);
    enqueue(&q,"슈프림양념치킨",18000);
    enqueue(&q,"스노윙치킨",18000);
    enqueue(&q,"핫후라이드치킨",19000);
    enqueue(&q,"크리미언 치킨",18000);
    dequeueDel(&q,C);
    enqueue(&q,"갈릭반 핫양념반",19000);
    enqueue(&q,"허니콤보",19000);
    priceSum(&q);
    orderList(&q);
}
