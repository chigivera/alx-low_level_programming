#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list
 * @list: pointer to the head of the skip list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev = list, *curr = list;

    if (list == NULL)
        return (NULL);

    while (curr->express != NULL && curr->n < value)
    {
        prev = curr;
        curr = curr->express;
        printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
    }

    if (curr->express == NULL && curr->n < value)
    {
        prev = curr;
        while (curr->next != NULL)
            curr = curr->next;
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