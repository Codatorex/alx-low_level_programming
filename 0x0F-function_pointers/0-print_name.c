#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
/**
 * print_with_newline - print string followed by a newline character
 * @name: string to print
 *
 * Description: This function prints each character of the string `name`
 *              followed by a newline character.
 */
void print_with_newline(char *name)
{
for (; *name; ++name)
write(1, name, 1);
write(1, "\n", 1);
}
/**
 * print_with_exclamation - print string followed by an exclamation mark
 * @name: string to print
 *
 * Description: This function prints each character of the string `name`
 *              followed by an exclamation mark and a newline character.
 */
void print_with_exclamation(char *name)
{
for (; *name; ++name)
write(1, name, 1);
write(1, "!\n", 2);
}

