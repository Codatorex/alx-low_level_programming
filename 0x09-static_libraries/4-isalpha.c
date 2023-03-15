#include "main.h"
/**
 * _isalpha - check alphabets lowercase and uppercase.
 * @c : the parameter that need to be checked.
 * Return: 1 if it's an alphabet 0 if it's special character.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
        return (1);
}
else if (c >= 65 && c <= 90)
{
        return (1);
}
return (0);
}
