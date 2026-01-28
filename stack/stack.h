#ifndef STACK_H
#define STACK_H

#ifndef STACK_DATA_TYPE
#define STACK_DATA_TYPE int
#endif

typedef STACK_DATA_TYPE stack_data_t;

typedef struct node {
  stack_data_t data;
  struct node *next;
} Node;

Node* stack_init();
void stack_push(Node **head, int data);
void stack_pop(Node **head);
void stack_display(Node *head);

#endif
