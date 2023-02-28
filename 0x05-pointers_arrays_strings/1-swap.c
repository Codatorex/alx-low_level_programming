#include "main.h"

/**
 * swap_int - swap the values of the 2 variables.
 * @a: the parameter needs to be checked.
 * @b: the parameter needs to be checked.
 * Return: a and b.
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
