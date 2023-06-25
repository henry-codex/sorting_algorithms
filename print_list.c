#include "sort.h"
#include <stdio.h>

/**
 * print_list - Print a doubly linked list of integers.
 * @list: The list to print.
 */
void print_list(const listint_t *list)
{
    const listint_t *node;

    node = list;
    while (node != NULL)
    {
        printf("%d", node->n);
        if (node->next != NULL)
            printf(" -> ");
        node = node->next;
    }
    printf("\n");
}

