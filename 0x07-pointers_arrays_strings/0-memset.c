#include "main.h"
#include <stdio.h>
/**
 * -memset:function that fills memory with a constant byte.
 * @n: parameter needs to be checked
 * @b: parameter needs to be checked
 * @s: parameter needs to be checked
 * Return: S.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
