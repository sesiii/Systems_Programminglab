// #ifndef QUEUE_H
// #define QUEUE_H

// #include "defs.h"

// typedef struct {
//     nodep front;
//     nodep rear;
// } Queue;

// void queue_init(Queue *q);
// int queue_is_empty(Queue *q);
// void enqueue(Queue *q, int data);
// int dequeue(Queue *q);

typedef struct
{
    nodep front; // Pointer to the beginning of the linked list
    nodep back;  // Pointer to the end of the linked list
} queue;
queue initqueue();         // Create a new empty queue
int emptyqueue(queue);     // Check whether a queue is empty
int front(queue);          // Return the element at the front of a queue (if non-empty)
queue enqueue(queue, int); // Insert an integer at the front of a queue
queue dequeue(queue);      // Delete an element from the back of a (non-empty) queue
void printqueue(queue);    // Print the elements of a queue from front to back
queue destroyqueue(queue);
// #endif // QUEUE_H