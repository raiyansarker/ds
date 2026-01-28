#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

Node* init();
void push(Node **head, int data);
void pop(Node **head);
void display(Node *head);
