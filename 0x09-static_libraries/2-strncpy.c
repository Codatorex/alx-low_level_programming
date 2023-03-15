#include <stdio.h>
#include <string.h>

/**
 * _strncpy - a function that copies a string.
 * @dest : parameter needs to be checked.
 * @src : parameter needs to be checked.
 * @n : parameter needs to be checked.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
        dest[i] = src[i];
}
for ( ; i < n; i++)
{
        dest[i] = '\0';
}
        return (dest);
}
