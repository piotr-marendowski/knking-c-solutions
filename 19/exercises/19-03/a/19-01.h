/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 1
Modification date (DD/MM/YYYY): 16.12.2022 */

#ifndef QUEVEDT_H
#define QUEVEDT_H

#include <stdbool.h>    /* C99 only */

typedef struct queve_type *Queve;

Queve create(void);
void destroy(Queve q);
void make_empty(Queve q);
bool is_empty(Queve q);
bool is_full(Queve q);
void insert(Queve q, int i);
int remove_first(Queve q);
int return_first(Queve q);
int return_last(Queve q);

#endif