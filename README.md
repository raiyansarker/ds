## Data Structures in C

This repository contains small implementations of classic data structures in C.  
It is primarily used for **university assignments and practice**, not for production use.  
The first module is a **singly linked list** with a minimal, easy-to-read API suitable for learning and experimentation.

### Linked List API

The linked list is defined with a `Node` struct:

```c
typedef struct node {
  int data;
  struct node *next;
} Node;
```

Public functions:

```c
Node* init();
void insert_begin(Node **head, int data);
void insert_end(Node **head, int data);
Node* find(Node *head, int value);
void delete(Node **head, int value);
void display(Node *head);
```

- `init` – initializes an empty list (returns `NULL` head)
- `insert_begin` – inserts a new node at the beginning
- `insert_end` – inserts a new node at the end
- `find` – returns a pointer to the first node with the given value, or `NULL`
- `delete` – deletes the first node with the given value, if present
- `display` – prints all node values to stdout, space-separated, followed by a newline

### Building and Running

From the `linkedlist/` directory, you can build the example program with `gcc`:

```bash
gcc -Wall -Wextra -std=c11 list.c test.c -o list
```

Then run it:

```bash
./list
```

This will:

1. Create a list
2. Insert a few integers
3. Delete one value
4. Mutate another via `find`
5. Print the list state after each operation

### Future Extensions

Possible future additions to this repository:

- More data structures (stacks, queues, trees, graphs, hash tables)
- Unit tests (e.g., using a lightweight C test framework or simple assertion-based tests)
- Benchmarks and complexity notes for each operation

This repository is primarily for learning and practice; feel free to extend or modify it as you explore data structures in C.

