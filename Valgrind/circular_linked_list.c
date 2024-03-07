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

int main() {
    Node* L = newNode(4);
    L->next = newNode(5);
    L->next->next = newNode(8);
    L->next->next->next = newNode(9);
    L->next->next->next->next = newNode(13);
    L->next->next->next->next->next = newNode(14);
    L->next->next->next->next->next->next = newNode(18);
    L->next->next->next->next->next->next->next = newNode(20);
    L->next->next->next->next->next->next->next->next = L; // Make the list circular

    // Uncomment one of the following lines to perform the specified operation

    // (a) L = NULL;
    // L = NULL;

    // (b) L -> next = NULL;
    // L->next = NULL;

    // (c) free(L);
    free(L);

    // (d) free(L -> next);
    // free(L->next);

    // (e) L = L -> next;
    // L = L->next;

    return 0;
}