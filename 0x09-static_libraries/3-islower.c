#include "main.h"
/**
 * _islower - check for lowercase.
 * @c: the character to be checked.
 * Return: 1 for lowercase characters or 0 for uppercase ones.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
        return (1);
}
return (0);
}
