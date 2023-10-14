#include "main.h"
#include <stdio.h>

/**
 * main - tests function that prints if an integer is positive or negative
 * Return: 0
 */

int main(void)
{
    int i;

    i = 0;

    // Print the value of i before calling the function
    printf("Before calling positive_or_negative: i = %d\n", i);

    // Call the positive_or_negative function
    positive_or_negative(i);

    // Print the value of i after calling the function
    printf("After calling positive_or_negative: i = %d\n", i);

    return (0);
}
