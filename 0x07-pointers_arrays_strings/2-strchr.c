#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @c : parameter that needs to be checked.
 * @s : parameter that needs to be checked.
 * Return: NULL.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
