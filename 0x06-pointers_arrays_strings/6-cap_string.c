#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @str : parameter needs to be checked.
 * Return: str.
 */
char *cap_string(char *str)
{
int len = strlen(str);
int cap_next = 1, i;

for (i = 0; i < len; i++)
{
if (isspace(str[i]) || str[i] == ',' || str[i] == ';' ||
str[i] == '.' || str[i] == '!' || str[i] == '?' ||
str[i] == '"' || str[i] == '(' || str[i] == ')' ||
str[i] == '{' || str[i] == '}')
{
cap_next = 1;
}
else if (cap_next)
{
str[i] = toupper(str[i]);
cap_next = 0;
}
else
{
str[i] = tolower(str[i]);
}
}
return (str);
}
