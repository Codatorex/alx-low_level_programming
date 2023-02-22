#include "main.h"
/**
 * print_sign - check the sign of n.
 * @n : the parameter that needs to be checked.
 * Return: 1 if it's greater than 0, -1 less than 0, 0 equal 0.
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
_putchar('0');
return (0);
}
