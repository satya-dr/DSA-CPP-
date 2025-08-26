#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Linked list structure
typedef struct List {
    Node* head;
    Node* tail;
} List;

// Initialize List
void initList(List* l) {
    l->head = NULL;
    l->tail = NULL;
}

// Push at front
void push_front(List* l, int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;

    if (l->head == NULL) {
        l->head = l->tail = newNode;
    } else {
        newNode->next = l->head;
        l->head = newNode;
    }
}

// Print Linked List
void printLL(List* l) {
    Node* temp = l->head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    List ll;
    initList(&ll);

    push_front(&ll, 1);
    push_front(&ll, 2);
    push_front(&ll, 3);

    printLL(&ll);

    return 0;
}
