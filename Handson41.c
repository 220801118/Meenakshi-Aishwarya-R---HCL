#include <stdio.h>

#define MAX 100

struct Stack {
    int arr[MAX];
    int top;
};

void initStack(struct Stack *s) {
    s->top=-1;
}

int isEmpty(struct Stack *s) {
    return s->top==-1;
}

void push(struct Stack *s, int x) {
    if (s->top<MAX-1) {
        s->arr[++s->top]=x;
    }
}

int pop(struct Stack *s) {
    if (!isEmpty(s)) {
        return s->arr[s->top--];
    }
    return -1; 
}

struct Queue {
    struct Stack s1;
    struct Stack s2;
};

void initQueue(struct Queue *q) {
    initStack(&q->s1);
    initStack(&q->s2);
}

void enqueue(struct Queue *q, int x) {
    push(&q->s1, x);
    printf("Enqueued: %d\n", x);
}

int dequeue(struct Queue *q) {
    if (isEmpty(&q->s1) && isEmpty(&q->s2)) {
        printf("Queue is empty!\n");
        return -1;
    }

    if (isEmpty(&q->s2)) {
        while (!isEmpty(&q->s1)) {
            int temp=pop(&q->s1);
            push(&q->s2, temp);
        }
    }

    int val=pop(&q->s2);
    printf("Dequeued: %d\n", val);
    return val;
}

int main() {
    struct Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    dequeue(&q);
    dequeue(&q);

    enqueue(&q, 40);
    enqueue(&q, 50);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    return 0;
}