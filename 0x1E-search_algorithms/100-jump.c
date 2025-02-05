#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using Jump search
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t jump = step;

    if (array == NULL || size == 0)
        return (-1);

    printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    while (jump < size && array[jump] < value)
    {
        prev = jump;
        jump += step;
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

    jump = jump < size - 1 ? jump : size - 1;
    while (prev <= jump)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
        prev++;
    }

    return (-1);
}