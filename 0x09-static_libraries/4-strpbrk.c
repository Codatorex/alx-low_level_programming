#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @accept: parameter needs to be checked.
 * @s: parameter needs to be checked.
 * Return: NULL.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*a == *s)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
