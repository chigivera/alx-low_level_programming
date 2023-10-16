#include "main.h"

/**
 * puts2 - Prints every other word in a sentence, starting with the first word,
 * followed by a new line.
 *
 * @str: The input sentence.
 */
void puts2(char *str)
{
    int i = 0;
    int word = 1; // Flag to track if a word should be printed

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            word = !word; // Toggle the flag when a space is encountered
        }
        else if (word)
        {
            _putchar(str[i]);
        }
        i++;
    }

    _putchar('\n');
}

