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
    int word = 1;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            if (word)
            {
                word = 0;
                _putchar(str[i]);
            }
            else
            {
                word = 1;
            }
        }
        else if (word)
        {
            _putchar(str[i]);
        }
        i++;
    }

    _putchar('\n');
}
