#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int seats;              // seat count in compartment
    struct Node *prev;
    struct Node *next;
};

// Add at front
void addFront(struct Node **head, int seats) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->seats = seats;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
}

// Add at end
void addEnd(struct Node **head, int seats) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->seats = seats;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Remove from any position (1-based index)
void removeAtPosition(struct Node **head, int pos) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head;
    int count = 1;

    // Move to the position
    while (temp != NULL && count < pos) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }

    // If deleting head
    if (temp->prev == NULL) {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
    } else {
        temp->prev->next = temp->next;
    }

    // If not last node
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    printf("Removed compartment with %d seats.\n", temp->seats);
    free(temp);
}

// Display forward
void displayForward(struct Node *head) {
    printf("Compartments forward: ");
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->seats);
        temp = temp->next;
    }
    printf("\n");
}

// Display backward
void displayBackward(struct Node *head) {
    if (head == NULL) return;

    // Go to last node
    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    printf("Compartments backward: ");
    while (temp != NULL) {
        printf("%d ", temp->seats);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    struct Node *train = NULL;

    // Add at least 4 compartments
    addEnd(&train, 50);
    addEnd(&train, 60);
    addFront(&train, 40);
    addEnd(&train, 70);

    printf("Initial train:\n");
    displayForward(train);
    displayBackward(train);

    // Remove 2nd compartment
    removeAtPosition(&train, 2);

    printf("\nAfter removing position 2:\n");
    displayForward(train);
    displayBackward(train);

    return 0;
}