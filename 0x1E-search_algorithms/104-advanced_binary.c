#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array to print
 * @left: left index
 * @right: right index
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_recursive - recursive implementation of advanced binary search
 * @array: pointer to the first element of the array
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (right < left)
        return (-1);

    print_array(array, left, right);
    mid = (left + right) / 2;

    if (array[mid] == value && (mid == left || array[mid - 1] != value))
        return (mid);
    if (array[mid] >= value)
        return advanced_binary_recursive(array, left, mid, value);
    return advanced_binary_recursive(array, mid + 1, right, value);
}

/**
 * advanced_binary - searches for a value using Advanced binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return advanced_binary_recursive(array, 0, size - 1, value);
}