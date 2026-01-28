/*
 * stack.c
 *
 * Author: Raiyan Sarker
 * Created: 2026-01-28
 *
 * Description:
 * Implementation of a stack data structure with basic
 * operations: push, pop, display.
 */

#include "stack.h"

Node* init() {
  return NULL;
}

void push(Node **head, int data) {
  Node *node = (Node*)calloc(1, sizeof(Node));
  node->data = data;
  node->next = *head;

  *head = node;
}

void pop(Node **head) {
  Node *curr = *head;

  if (curr == NULL) return;

  *head = curr->next;

  free(curr);
}

void display(Node *head) {
  Node *curr = head;
  while (curr != NULL) {
    printf("%d ", curr->data);
    curr = curr->next;
  }
  printf("\n");
}
