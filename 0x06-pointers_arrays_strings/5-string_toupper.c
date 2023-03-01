#include <ctype.h>
#include "main.h"
/**
 * string_toupper - function changes lowercase to uppercase.
 * @str : parameter needs to be checked.
 * Return: str.
 */

char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (islower(*ptr))
{
	*ptr = toupper(*ptr);
}
ptr++;
}
return (str);
}
