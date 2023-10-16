#include "main.h"
/**
* puts2 - Prints every other character in a string, starting with the first character,
* followed by a new line.
*
* @str: The input string.
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] == ' ')
{
_putchar(' ')
i++;
}
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
