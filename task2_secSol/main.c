#include <stdio.h>
#define MAX_QUEUE_SIZE 10

int orderCount = 0; // 현재 남은 주문의 갯수
int sum =0;

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
    q->front = q->rear =0;
}

int is_empty(Queue *q){
    if(q->front == q->rear) return 1;
    else return 0;
}

int is_full(Queue *q){
    if((q->rear+1)%MAX_QUEUE_SIZE == q->front) return 1;
    else return 0;
}

void queue_print(Queue *q){
    if(!is_empty(q)){
        int i =q->front;
        printf("현재 남은 주문\n");
        printf("------------------------\n");
        do{
            i=(i+1) % MAX_QUEUE_SIZE;
            printf("제품: %s, 가격: %d\n",q->data[i].name,q->data[i].price);
            if(i == q->rear)
                break;
        }while(i !=q->front);
    }
}

void enqueue(Queue *q, char* name, unsigned int price){
    if(is_full(q)) printf("주문이 가득 찼습니다.\n");
    q->rear = (q->rear+1) % MAX_QUEUE_SIZE;
    q->data[q->rear].name = name;
    q->data[q->rear].price = price;
    orderCount++;
}

void dequeue(Queue *q, int maxDel){
    if(is_empty(q)) printf("주문이 하나도 없습니다.\n");
    else if(maxDel <= orderCount){
        for(int i = 0; i <maxDel; i++){
            sum += q->data[(q->front+1) % MAX_QUEUE_SIZE].price; // 배달 완료 금액 합계 (원형 큐인 것에 주의)
            q->front = (q->front+1) % MAX_QUEUE_SIZE;
            orderCount--;
        }
    }else{
        for(int i = 0; i < orderCount; i++){
            sum += q->data[(q->front+1) % MAX_QUEUE_SIZE].price; // 배달 완료 금액 합계
            q->front = (q->front+1) % MAX_QUEUE_SIZE;
            orderCount--;
        }
    }
}


int main() {
    Queue q;
    int A =3; // A배달원의 최대 배달 가능 수
    int B =2; // B배달원의 최대 배달 가능 수
    int C =5; // C배달원의 최대 배달 가능 수

    init_queue(&q);
    enqueue(&q,"황금올리브 치킨",18000);
    enqueue(&q,"뿌링클",19000);
    enqueue(&q,"오리엔탈파닭",17000);
    enqueue(&q,"레드콤보",18000);
    enqueue(&q,"고추 바사삭",19000);
    dequeue(&q,A);
    enqueue(&q,"매운간장치킨",16000);
    dequeue(&q,B);
    enqueue(&q,"맛초킹",17000);
    dequeue(&q,A);
    enqueue(&q,"슈프림양념치킨",18000);
    enqueue(&q,"스노윙치킨",18000);
    enqueue(&q,"핫후라이드치킨",19000);
    enqueue(&q,"크리미언 치킨",18000);
    dequeue(&q,C);
    enqueue(&q,"갈릭반 핫양념반",19000);
    enqueue(&q,"허니콤보",19000);
    printf("현재 주문 완료 금액 합: %d\n", sum);
    printf("----------------------------\n");
    queue_print(&q);
}
