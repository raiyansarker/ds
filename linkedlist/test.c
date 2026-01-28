#include "list.h"

int main() {
  Node *head = init();

  insert_end(&head, 12);
  insert_end(&head, 15);
  insert_end(&head, 18);
  display(head);

  delete(&head, 15);
  display(head);

  Node *s = find(head, 18);
  if (s != NULL) s->data = 25;
  display(head);

  return 0;
}
