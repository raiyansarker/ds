# Linked List

A minimal singly linked list implementation in C.

## Structure

```c
typedef struct node {
  int data;
  struct node *next;
} Node;
```

## API

| Function | Description |
|----------|-------------|
| `init()` | Initialize an empty list (returns `NULL`) |
| `insert_begin(Node **head, int data)` | Insert node at beginning |
| `insert_end(Node **head, int data)` | Insert node at end |
| `find(Node *head, int value)` | Find node by value (returns `NULL` if not found) |
| `delete(Node **head, int value)` | Delete first node with given value |
| `display(Node *head)` | Print all values to stdout |

## Building

```bash
gcc -Wall -Wextra -std=c11 list.c test.c -o list
./list
```

## Example

```c
#include "list.h"

int main() {
    Node *head = init();
    insert_begin(&head, 10);
    insert_end(&head, 20);
    display(head);  // Output: 10 20
    delete(&head, 10);
    display(head);  // Output: 20
    return 0;
}
```
