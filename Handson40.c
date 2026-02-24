#include <stdio.h>

#define MAX 5

struct Queue {
    int arr[MAX];
    int front;
    int rear;
    int count;
};

void initQueue(struct Queue *q) {
    q->front=0;
    q->rear=-1;
    q->count=0;
}

int isFull(struct Queue *q) {
    return q->count==MAX;
}

int isEmpty(struct Queue *q) {
    return q->count==0;
}

void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full! Cannot insert %d\n", value);
        return;
    }

    q->rear=(q->rear+1)%MAX;
    q->arr[q->rear]=value;
    q->count++;

    printf("Enqueued: %d\n", value);
}

int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1;
    }

    int value=q->arr[q->front];
    q->front=(q->front+1)%MAX;
    q->count--;

    printf("Dequeued: %d\n", value);
    return value;
}

/
void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    int index=q->front;
    for (int i=0; i<q->count; i++) {
        printf("%d ", q->arr[index]);
        index=(index+1) % MAX;
    }
    printf("\n");
}

int main() {
    struct Queue q;
    initQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    display(&q);

    dequeue(&q);
    dequeue(&q);

    display(&q);

    enqueue(&q, 60);
    enqueue(&q, 70);

    display(&q);

    return 0;
}