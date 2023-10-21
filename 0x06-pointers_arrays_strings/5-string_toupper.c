#include "main.h"
/**
* string_toupper - Changes all lowercase letters to uppercase in a string
* @str: The string to modify
* Return: Pointer to the modified string
*/
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;  /* Convert lowercase to uppercase */
i++;
}
return str;
}
