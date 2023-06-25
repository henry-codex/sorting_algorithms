#include "sort.h"
#include <stdio.h>

/**
 * print_array - Print an array of integers.
 * @array: The array of integers to print.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i != size - 1)
            printf(", ");
    }
    printf("\n");
}

