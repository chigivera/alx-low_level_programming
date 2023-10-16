#include "main.h"
/**
* puts_half - Prints the second half of a string.
* @str: Input string.
*/
void puts_half(char *str)
{
int length = 0;
int i,y;
while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
for ( y  = length / 2; y < length; y++)
{
_putchar(str[y]);
}
}
else
{
for ( i = (length - 1) / 2 + 1; i < length; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
