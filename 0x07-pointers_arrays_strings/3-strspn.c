#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @accept: parameter needs to be checked.
 * @s: parameter needs to be checked.
 * Return: count.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;
while (*s && !found)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
count++;
found = 1;
break;
}
a++;
}
if (!found)
{
return (count);
}
s++;
found = 0;
}
return (count);
}
