// #include <stdio.h>
// #include <stdlib.h>
// #include "stack.h"
// #include "queue.h"
// #include "defs.h"

// #define MAX_SIZE 100

// void stack_init(Stack *s) {
//     s->top = -1;
// }

// int stack_is_empty(Stack *s) {
//     return s->top == -1;
// }

// int stack_is_full(Stack *s) {
//     return s->top == MAX_SIZE - 1;
// }

// void stack_push(Stack *s, int item) {
//     if (stack_is_full(s)) {
//         printf("Stack is full\n");
//         return;
//     }
//     s->items[++(s->top)] = item;
// }

// int stack_pop(Stack *s) {
//     if (stack_is_empty(s)) {
//         printf("Stack is empty\n");
//         return -1;
//     }
//     return s->items[(s->top)--];
// }

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
#include "stack.h"
stack initstack()
{
    stack S;
    S = (stack)malloc(sizeof(node));
    S->data = 0;
    S->next = NULL;
    return S;
}
stack destroystack(stack S)
{
    node *p;
    while (S)
    {
        p = S;
        S = S->next;
        free(p);
    }
    return NULL;
}