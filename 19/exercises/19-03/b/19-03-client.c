/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Client for exercise 3 (linked list version)
Modification date (DD/MM/YYYY): 18.12.2022 */

#include <stdio.h>
#include "19-01.h"

int main(void)
{
    Queve q1, q2;
    Item n;

    q1 = create();
    q2 = create();

    insert(q1, 1);
    insert(q1, 2);

    n = return_first(q1);
    printf("First in queve: %d\n", n);
    n = return_last(q1);
    printf("Last in queve: %d\n", n);

    n = remove_first(q1);
    printf("Deleted %d form q1\n", n);
    insert(q2, n);
    n = remove_first(q1);
    printf("Deleted %d from q1\n", n);
    insert(q2, n);

    destroy(q1);

    while (!is_empty(q2))
        printf("Deleted %d form q2\n", remove_first(q2));

    insert(q2, 3);
    make_empty(q2);
    if (is_empty(q2))
        printf("q2 is empty\n");
    else
        printf("q2 is not empty\n");
    
    destroy(q2);

    return 0;
}