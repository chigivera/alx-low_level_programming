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
 * binary_search_exp - binary search for exponential search
 * @array: pointer to the first element of the array
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    while (left <= right)
    {
        print_array(array, left, right);
        mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid);
        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return (-1);
}

/**
 * exponential_search - searches for a value using Exponential search
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t right;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    right = bound < size - 1 ? bound : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", bound/2, right);

    return binary_search_exp(array, bound/2, right, value);
}