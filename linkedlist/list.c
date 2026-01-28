/*
 * list.c
 *
 * Author: Raiyan Sarker
 * Created: 2026-01-28
 *
 * Description:
 * Singly linked list implementation with basic operations.
 * operations: init, insert_begin, insert_end, find, delete, display.
 */

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

Node* list_init() {
  return NULL;
}

void list_insert_begin(Node **head, int data) {
  Node *node = (Node*)calloc(1, sizeof(Node));
  node->data = data;
  node->next = *head;

  *head = node;
}

void list_insert_end(Node **head, int data) {
  Node *node = (Node*)calloc(1, sizeof(Node));
  node->data = data;
  node->next = NULL;

  if (*head == NULL) {
    *head = node;
    return;
  }

  Node *curr = *head;
  while (curr->next != NULL) curr = curr->next;

  curr->next = node;
}

Node* list_find(Node *head, int value) {
  Node *curr = head;
  while (curr != NULL) {
    if (curr->data == value) {
      return curr;
    }
    curr = curr->next;
  }

  return NULL;
}

void list_delete(Node **head, int value) {
  Node *curr = *head, *prev = NULL;

  while (curr != NULL && curr->data == value) {
    prev = curr;
    curr = curr->next;
  }

  /*
   * when no node is found
   */
  if (curr == NULL) return;

  /*
   * if prev is null, that means the first node is the one
   * to be deleted
   */
  if (prev == NULL) {
    *head = curr->next;
  } else {
    prev->next = curr->next;
  }

  free(curr);
}

void list_display(Node *head) {
  Node *curr = head;
  while (curr != NULL) {
    printf("%d ", curr->data);
    curr = curr->next;
  }
  printf("\n");
}
