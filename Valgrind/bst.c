#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* L;
    struct Node* R;
} Node;

Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->L = node->R = NULL;
    return node;
}

Node* insert(Node* node, int data) {
    if (node == NULL) return newNode(data);

    if (data < node->data)
        node->L = insert(node->L, data);
    else if (data > node->data)
        node->R = insert(node->R, data);

    return node;
}

int main() {
    Node* T = NULL;
    T = insert(T, 6);
    T = insert(T, 9);
    T = insert(T, 3);
    T = insert(T, 2);
    T = insert(T, 10);
    T = insert(T, 7);
    T = insert(T, 5);
    T = insert(T, 8);
    T = insert(T, 4);

    // Uncomment one of the following lines to perform the specified operation

    // (a) T = NULL;
    // T = NULL;

    // (b) free(T);
    free(T);

    // (c) T -> L = T -> R = NULL;
    // T->L = T->R = NULL;

    // (d) free(T -> L); free(T -> R);
    // free(T->L); free(T->R);

    // (e) free(T -> L); free(T -> R); free(T);
    // free(T->L); free(T->R); free(T);

    return 0;
}