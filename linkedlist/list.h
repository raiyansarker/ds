#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

Node* init();
void insert_begin(Node **head, int data);
void insert_end(Node **head, int data);
Node* find(Node *head, int value);
void delete(Node **head, int value);
void display(Node *head);
