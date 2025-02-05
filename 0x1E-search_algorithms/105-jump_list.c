#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list using Jump search
 * @list: pointer to the head of the list
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t step_count;
    listint_t *prev = list, *curr = list;

    if (list == NULL || size == 0)
        return (NULL);

    while (curr->next != NULL && curr->n < value)
    {
        prev = curr;
        step_count = 0;
        while (curr->next != NULL && step_count < step)
        {
            curr = curr->next;
            step_count++;
        }
        printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           prev->index, curr->index);

    while (prev && prev->index <= curr->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}