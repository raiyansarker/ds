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

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

Node* stack_init() {
  return NULL;
}

void stack_push(Node **head, int data) {
  Node *node = (Node*)calloc(1, sizeof(Node));
  node->data = data;
  node->next = *head;

  *head = node;
}

void stack_pop(Node **head) {
  Node *curr = *head;

  if (curr == NULL) return;

  *head = curr->next;

  free(curr);
}

void stack_display(Node *head) {
  Node *curr = head;
  while (curr != NULL) {
    printf("%d ", curr->data);
    curr = curr->next;
  }
  printf("\n");
}
