#include "stack.h"

int main() {
  Node *head = stack_init();

  stack_push(&head, 2);
  stack_push(&head, 3);
  stack_push(&head, 5);
  stack_push(&head, 9);
  stack_push(&head, 19);

  stack_display(head);

  stack_pop(&head);
  stack_display(head);

  stack_pop(&head);
  stack_pop(&head);
  stack_display(head);

  stack_push(&head, 2);
  stack_push(&head, 3);
  stack_push(&head, 5);
  stack_display(head);

  stack_pop(&head);
  stack_pop(&head);
  stack_pop(&head);
  stack_pop(&head);
  stack_pop(&head);
  stack_pop(&head);
  stack_pop(&head);
  stack_pop(&head);
  stack_pop(&head);
  stack_pop(&head);
  stack_display(head);

  return 0;
}
