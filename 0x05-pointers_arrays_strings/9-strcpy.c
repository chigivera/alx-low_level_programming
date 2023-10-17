#include "main.h"

/**
* _strcpy - Copies the string pointed to 
* @dest: The buffer to which the string should be copied
* Return: The pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
