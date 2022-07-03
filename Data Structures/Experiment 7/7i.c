#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
    int size, front, rear, *q;
}queue;

queue create(int size){
    queue q;
    q.size = size;
    q.front = q.rear = -1;
    q.q = (int *)malloc(sizeof(int)*q.size);
    return q;
}

void enqueue(queue *q, int x){
    if(q->rear == q->size-1)
        printf("Queue is Full\n");
    else{
        q->rear++;
        q->q[q->rear] = x;
    }
}

int dequeue(queue *q){
    int x = -1;
    if(q->front == q->rear)
        printf("Queue is Empty\n");
    else{
        q->front++;
        x = q->q[q->front];
    }
    return x;
}

int isEmpty(queue q){
    return (q.front==q.rear);
}

int isFull(queue q){
    return (q.rear == q.size-1);
}

void display(queue q){
    printf("Queue: ");
    while(q.front < q.rear){
        q.front++;
        printf("%d ", q.q[q.front]);
    }
    printf("\n");
}

void main(){
    int n;
    printf("Enter the size of the queue: ");
    scanf("%d", &n);
    queue qu = create(n);

    enqueue(&qu, 10);
    display(qu);
    enqueue(&qu, 20);
    display(qu);
    enqueue(&qu, 30);
    display(qu);
    enqueue(&qu, 40);
    display(qu);
    dequeue(&qu);
    display(qu);
    dequeue(&qu);
    display(qu);
    dequeue(&qu);
    display(qu);
}