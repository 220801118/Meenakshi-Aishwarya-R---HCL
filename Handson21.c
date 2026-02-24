#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;      
    int size;       
    int capacity; 
} Vector;

void init(Vector *v, int capacity) {
    v->size=0;
    v->capacity=capacity;
    v->data=(int *)malloc(capacity * sizeof(int));

    if (v->data==NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
}

void resize(Vector *v, int newCapacity) {
    int *temp=(int *)realloc(v->data, newCapacity * sizeof(int));
    if (temp==NULL) {
        printf("Memory reallocation failed!\n");
        return;
    }
    v->data=temp;
    v->capacity=newCapacity;

    if (v->size>newCapacity) {
        v->size=newCapacity;
    }
}

void push(Vector *v, int value) {
    if (v->size == v->capacity) {
        resize(v, v->capacity * 2);
    }
    v->data[v->size]=value;
    v->size++;
}

int pop(Vector *v) {
    if (v->size == 0) {
        printf("Vector is empty! Cannot pop.\n");
        return -1;
    }
    v->size--;
    return v->data[v->size];
}

void freeVector(Vector *v) {
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}

void display(Vector *v) {
    printf("Vector elements: ");
    for (int i = 0; i < v->size; i++) {
        printf("%d ", v->data[i]);
    }
    printf("\nSize = %d, Capacity = %d\n", v->size, v->capacity);
}

int main() {
    Vector v;
    init(&v, 2);  
    push(&v, 10);
    push(&v, 20);
    push(&v, 30); 
    push(&v, 40);
    display(&v);
    int x = pop(&v);
    printf("Popped element: %d\n", x);
    display(&v);
    resize(&v, 10); 
    display(&v);
    freeVector(&v);
    return 0;
}