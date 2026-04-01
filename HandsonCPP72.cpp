#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* detectCycle(Node* head) {
    Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) return slow;
    }
    return nullptr;
}

void removeCycle(Node* head) {
    Node* meet = detectCycle(head);
    if (!meet) return;

    Node* start = head;

    while (start != meet) {
        start = start->next;
        meet = meet->next;
    }

  
    Node* temp = start;
    while (temp->next != start)
        temp = temp->next;

    temp->next = nullptr;
}