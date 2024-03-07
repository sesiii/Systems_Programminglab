// #include <stdio.h>
// #include <stdlib.h>
// #include "queue.h"
// #include "defs.h"

// void queue_init(Queue *q) {
//     q->front = NULL;
//     q->rear = NULL;
// }

// int queue_is_empty(Queue *q) {
//     return q->front == NULL;
// }

// void enqueue(Queue *q, int data) {
//     nodep new_node = (nodep)malloc(sizeof(node));
//     if (new_node == NULL) {
//         printf("Error: unable to allocate memory for new node\n");
//         return;
//     }
//     new_node->data = data;
//     new_node->next = NULL;
//     if (queue_is_empty(q)) {
//         q->front = q->rear = new_node;
//     } else {
//         q->rear->next = new_node;
//         q->rear = new_node;
//     }
// }

// int dequeue(Queue *q) {
//     if (queue_is_empty(q)) {
//         printf("Error: queue is empty\n");
//         return -1;
//     }
//     nodep temp = q->front;
//     int data = temp->data;
//     q->front = q->front->next;
//     if (q->front == NULL) {
//         q->rear = NULL;
//     }
//     free(temp);
//     return data;
// }

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
#include "queue.h"
queue initqueue()
{
    queue Q;
    node *p;
    p = (node *)malloc(sizeof(node));
    p->data = 0;
    p->next = NULL;
    Q.front = Q.back = p;
    return Q;
}
queue destroyqueue(queue Q)
{
    node *p;
    while (Q.front)
    {
        p = Q.front;
        Q.front = (Q.front)->next;
        free(p);
    }
    Q.front = Q.back = NULL;
    return Q;
}