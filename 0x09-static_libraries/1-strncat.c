#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest : parameter that needs to be checked.
 * @src : parameter that needs to be checked.
 * @n : parameter that needs to be checked.
 * Return: dest.
 */
char *_strncat(char *dest, const char *src, int n)
{
        int dest_len = strlen(dest);
        int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
        dest[dest_len + i] = src[i];
}
        dest[dest_len + i] = '\0';
        return (dest);
}
