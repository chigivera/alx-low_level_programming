#include <unistd.h>
#include "main.h"
/**
 * _putchar - write a character to the standard output
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
