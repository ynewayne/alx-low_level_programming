#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;

    if (array == NULL || size == 0)
        return (-1);

    printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    while (array[prev] < value)
    {
        prev += step;
        if (prev >= size)
            break;
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
    prev -= step;
    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev++;
        if (prev == size)
            return (-1);
    }

    if (array[prev] == value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        return (prev);
    }

    return (-1);
}
