#include "main.h"
#include <stdio.h>
/**
 * _memcpy: function that copies memory area.
 * @n: parameter needs to be checked.
 * @src: parameter needs to be checked.
 * @dest: parameter needs to be checked.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *pDest = dest;
char *pSrc = src;
unsigned int i;
for (i = 0; i < n; i++)
{
*pDest++ = *pSrc++;
}
return (dest);
}
