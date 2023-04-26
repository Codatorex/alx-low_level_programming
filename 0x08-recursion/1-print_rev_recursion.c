#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
/* Base case: end of string, return*/
return;
}
_print_rev_recursion(s + 1);/*Recursively call with next character*/
_putchar(*s); /*Print current character after recursion*/
}
