#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
*/

int _strlen_recursion(char *s)
{
/*Base case: when the string is empty (i.e., end of string)*/
if (*s == '\0')
{
return (0);
}
/*Recursive: add 1 to the length of the string after the current character*/
return (1 + _strlen_recursion(s + 1));
}
