#include "list.h"

int main() {
  Node *head = list_init();

  list_insert_end(&head, 12);
  list_insert_end(&head, 15);
  list_insert_end(&head, 18);
  list_display(head);

  list_delete(&head, 15);
  list_display(head);

  Node *s = find(head, 18);
  if (s != NULL) s->data = 25;
  list_display(head);

  return 0;
}
