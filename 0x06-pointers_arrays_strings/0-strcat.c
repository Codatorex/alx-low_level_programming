#include "main.h"
/**
 * _strcat - concatenate two strings.
 * @dest : the parameter needs to be checked.
 * @src : the parameter needs to be checked.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
while (*ptr != '\0')
	{
	ptr++;
	}
while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}
	*ptr = '\0';
	return (dest);
}
