#include "main.h"
/**
 * print_last_digit  - returns the last digit of a decimal number.
 * @n : parameter that must be checked.
 * Return: d the last digit.
 */
int print_last_digit(int n)
{
int d;
d = n % 10;
if (d < 0)
{
d = d * -1;
}
_putchar(d  + '0');
return (d);
}
