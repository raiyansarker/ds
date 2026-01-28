#ifndef LIST_H
#define LIST_H

#ifndef LIST_DATA_TYPE
#define LIST_DATA_TYPE int;
#endif

typedef LIST_DATA_TYPE list_data_t;

typedef struct node {
  list_data_t data;
  struct node *next;
} Node;

Node* list_init();
void list_insert_begin(Node **head, int data);
void list_insert_end(Node **head, int data);
Node* list_find(Node *head, int value);
void list_delete(Node **head, int value);
void list_display(Node *head);

#endif
