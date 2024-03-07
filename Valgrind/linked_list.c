#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
}

int main() {
    Node* head = newNode(4);
    head->next = newNode(5);
    head->next->next = newNode(8);
    head->next->next->next = newNode(9);
    head->next->next->next->next = newNode(13);
    head->next->next->next->next->next = newNode(14);
    head->next->next->next->next->next->next = newNode(18);
    head->next->next->next->next->next->next->next = newNode(20);

    // // Delete nodes in the order that minimizes definitely lost memory
    // deleteNode(&head, 20);
    // deleteNode(&head, 18);
    // deleteNode(&head, 14);
    // deleteNode(&head, 13);
    // deleteNode(&head, 9);
    // deleteNode(&head, 8);
    // deleteNode(&head, 5);
    // deleteNode(&head, 4);

    // Delete nodes in the order that maximizes definitely lost memory
    deleteNode(&head, 4);
    deleteNode(&head, 5);
    deleteNode(&head, 8);
    deleteNode(&head, 9);
    deleteNode(&head, 13);
    deleteNode(&head, 14);
    deleteNode(&head, 18);
    deleteNode(&head, 20);
    

    return 0;
}