#include "stack.h"

int main() {
  Node *head = init();

  push(&head, 2);
  push(&head, 3);
  push(&head, 5);
  push(&head, 9);
  push(&head, 19);

  display(head);

  pop(&head);
  display(head);

  pop(&head);
  pop(&head);
  display(head);

  push(&head, 2);
  push(&head, 3);
  push(&head, 5);
  display(head);

  pop(&head);
  pop(&head);
  pop(&head);
  pop(&head);
  pop(&head);
  pop(&head);
  pop(&head);
  pop(&head);
  pop(&head);
  pop(&head);
  display(head);

  return 0;
}
