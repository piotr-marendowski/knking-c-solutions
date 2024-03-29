/* License: BSD-3-Clause license
Authors: K.N. King, William Gherman
Purpose: Exercise 3
Modification date (DD/MM/YYYY): 19.02.2023 */

/* stackADT2.c (Chapter 19, page 498) */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stackADT2.h"

struct stack_type {
  Item *contents;
  int top;
  int size;
};

Stack create(int size)
{
  Stack s = malloc(sizeof(struct stack_type));
  assert(s != NULL);
  s->contents = malloc(size * sizeof(Item));
  assert(s->contents != NULL); /* Warning: memleak for s!!! */
  s->top = 0;
  s->size = size;
  return s;
}

void destroy(Stack s)
{
  free(s->contents);
  free(s);
}

void make_empty(Stack s)
{
  s->top = 0;
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

bool is_full(Stack s)
{
  return s->top == s->size;
}

void push(Stack s, Item i)
{
  assert(!is_full(s));
  s->contents[s->top++] = i;
}

Item pop(Stack s)
{
  assert(!is_empty(s));
  return s->contents[--s->top];
}