## Data Structures in C

This repository contains small implementations of classic data structures in C.  
It is primarily used for **university assignments and practice**, not for production use.  

Currently implemented modules:

- **Singly linked list** – minimal, easy-to-read API suitable for learning and experimentation
- **Stack** – LIFO stack implemented on top of a singly linked list-style `Node`

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

### Stack API

The stack uses the same `Node` layout:

```c
typedef struct node {
  int data;
  struct node *next;
} Node;
```

Public functions:

```c
Node* init();
void push(Node **head, int data);
void pop(Node **head);
void display(Node *head);
```

- `init` – initializes an empty stack (returns `NULL` head)
- `push` – pushes a new value onto the top of the stack
- `pop` – pops (removes) the value at the top of the stack (no-op on empty stack)
- `display` – prints stack contents from top to bottom, space-separated, followed by a newline

### Building and Running

From the `linkedlist/` directory, you can build the linked list example program with `gcc`:

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

From the `stack/` directory, you can build the stack example program with `gcc`:

```bash
gcc -Wall -Wextra -std=c11 stack.c test.c -o stack
```

Then run it:

```bash
./stack
```

This will:

1. Create an empty stack
2. Push several integers
3. Pop some values
4. Print the stack contents after several operations

### Future Extensions

Possible future additions to this repository:

- More data structures (queues, trees, graphs, hash tables)
- Unit tests (e.g., using a lightweight C test framework or simple assertion-based tests)
- Benchmarks and complexity notes for each operation

This repository is primarily for learning and practice; feel free to extend or modify it as you explore data structures in C.

