#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Input string.
 */
void puts_half(char *str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    if (length % 2 == 0)
    {
        for (int i = length / 2; i < length; i++)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        for (int i = (length - 1) / 2 + 1; i < length; i++)
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}

