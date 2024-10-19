#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n)
{
    return (n < 0 ? -n : n);
}

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return len;
}

void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while ((dest[i] = src[i]) != '\0')
        i++;
    return dest;
}

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
        i++;

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
        i++;

    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}

char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;
    while (dest[i])
        i++;
    while ((dest[i + j] = src[j]))
        j++;
    return dest;
}

char *_strncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;
    while (dest[i])
        i++;
    while (j < n && src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}

char *_strncpy(char *dest, char *src, int n)
{
    int i;
    for (i = 0; i < n && src[i]; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
        s[i] = b;
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
        dest[i] = src[i];
    return dest;
}

char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }
    return (c == '\0') ? s : NULL;
}

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;
    char *a;

    while (*s)
    {
        found = 0;
        for (a = accept; *a; a++)
        {
            if (*s == *a)
            {
                found = 1;
                break;
            }
        }
        if (!found)
            return count;
        count++;
        s++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept)
{
    char *a;
    while (*s)
    {
        for (a = accept; *a; a++)
        {
            if (*s == *a)
                return s;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle)
{
    char *h, *n;
    while (*haystack)
    {
        h = haystack;
        n = needle;
        while (*h && *n && *h == *n)
        {
            h++;
            n++;
        }
        if (!*n)
            return haystack;
        haystack++;
    }
    return NULL;
}