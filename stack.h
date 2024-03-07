// #ifndef STACK_H
// #define STACK_H

// #define MAX_SIZE 100

// typedef struct {
//     int items[MAX_SIZE];
//     int top;
// } Stack;

// void stack_init(Stack *s);
// int stack_is_empty(Stack *s);
// int stack_is_full(Stack *s);
// void stack_push(Stack *s, int item);
// int stack_pop(Stack *s);

// #endif // STACK_H

typedef nodep stack;    // Pointer to the beginning of the linked list
stack initstack();      // Create a new empty stack
int emptystack(stack);  // Check whether the input stack is empty
int top(stack);         // Return the top of a stack (if non-empty)
stack push(stack, int); // Push an integer to a stack
stack pop(stack);       // Pop from a (non-empty) stack
void printstack(stack); // Print the elements of a stack from top to bottom
stack destroystack(stack);