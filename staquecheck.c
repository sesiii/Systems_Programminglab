// #include <stdio.h>
// #include "stack.h"
// #include "queue.h"

// int main() {
//     Stack s;
//     stack_init(&s);
//     stack_push(&s, 1);
//     stack_push(&s, 2);
//     stack_push(&s, 3);
//     printf("Popped from stack: %d\n", stack_pop(&s));
//     printf("Popped from stack: %d\n", stack_pop(&s));
//     printf("Popped from stack: %d\n", stack_pop(&s));

//     Queue q;
//     queue_init(&q);
//     enqueue(&q, 1);
//     enqueue(&q, 2);
//     enqueue(&q, 3);
//     printf("Dequeued from queue: %d\n", dequeue(&q));
//     printf("Dequeued from queue: %d\n", dequeue(&q));
//     printf("Dequeued from queue: %d\n", dequeue(&q));

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
#include "stack.h"
#include "queue.h"
#define ITER_CNT 10
int main()
{
    stack S;
    queue Q;
    int i;
    S = initstack();
    for (i = 0; i < ITER_CNT; ++i)
    {
        S = push(S, rand() % 100);
        printstack(S);
    }
    S = destroystack(S);
    Q = initqueue();
    for (i = 0; i < ITER_CNT; ++i)
    {
        Q = enqueue(Q, rand() % 100);
        printqueue(Q);
    }
    Q = destroyqueue(Q);
    exit(0);
}