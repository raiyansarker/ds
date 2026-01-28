#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#define STACK_DATA_TYPE char

#include "stack.h"

int priority(char c) {
  switch (c) {
    case '+':
    case '-':
      return 1;
    case '*':
    case '/':
      return 2;
    case '^':
      return 3;

    default:
      return 0;
  }
}

bool is_operand(char c) {
  if (
    (c >= 'A' && c <= 'Z') ||
    (c >= 'a' && c <= 'z') ||
    (c >= '0' && c <= '9')
  ) {
    return true;
  }

  return false;
}

int main() {
  char buff[50];
  scanf("%49[^\n]s", buff);

  char ans[50];
  size_t j = 0;

  Node *stack = stack_init();
  for (size_t i = 0; buff[i] != '\0'; i++) {
    if (is_operand(buff[i])) {
      ans[j++] = buff[i];
    } else if (buff[i] == ')') {
      while (stack != NULL && stack->data != '(') {
        ans[j++] = stack->data;
        stack_pop(&stack);
      }
      stack_pop(&stack);
    } else if (buff[i] == '(') {
      stack_push(&stack, '(');
    } else {
      while (
        stack != NULL &&
        stack->data != '(' &&
        priority(stack->data) >= priority(buff[i])
      ) {
        ans[j++] = stack->data;
        stack_pop(&stack);
      }
      stack_push(&stack, buff[i]);
    }
  }

  while (stack != NULL) {
    ans[j++] = stack->data;
    stack_pop(&stack);
  }

  ans[j] = '\0';
  printf("%s\n", ans);
}
