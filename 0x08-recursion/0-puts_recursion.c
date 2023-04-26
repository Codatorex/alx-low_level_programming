#include"main.h"
#include <stdio.h>

/**
 * _puts_recursion - function similar to  puts();
 * @s: input
 * Return: Always the value 0
 */

void _puts_recursion(char *s)
{
/* Base case: if the string is empty or NULL, print a new line and return*/
if (*s == '\0')
{
_putchar('\n');
return;
}
/*Print the current character and move to the next character*/
_putchar(*s);
/*Recursively call the function with the next character in the string*/
_puts_recursion(s + 1);
}
