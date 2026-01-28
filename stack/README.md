# Stack

A LIFO stack implementation using linked list nodes in C.

## Structure

```c
typedef struct node {
  stack_data_t data;  // Default: int
  struct node *next;
} Node;
```

## API

| Function | Description |
|----------|-------------|
| `stack_init()` | Initialize an empty stack (returns `NULL`) |
| `stack_push(Node **head, int data)` | Push value onto top |
| `stack_pop(Node **head)` | Pop value from top |
| `stack_display(Node *head)` | Print stack contents (top to bottom) |

## Building

```bash
gcc -Wall -Wextra -std=c11 stack.c test.c -o stack
./stack
```

## Example

```c
#include "stack.h"

int main() {
    Node *stack = stack_init();
    stack_push(&stack, 10);
    stack_push(&stack, 20);
    stack_display(stack);  // Output: 20 10
    stack_pop(&stack);
    stack_display(stack);  // Output: 10
    return 0;
}
```

## Applications

### Infix to Postfix Converter

This module includes an infix to postfix expression converter using the stack.

```bash
gcc -Wall -Wextra -std=c11 stack.c infinix-postfix.c -o infinix-postfix
./infinix-postfix
```

Supports operators: `+`, `-`, `*`, `/`, `^` with proper precedence and parentheses.
