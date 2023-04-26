#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */


int factorial(int n)
{
if (n < 0)
{
/*Return -1 to indicate an error for negative numbers*/
return (-1);
}
else if (n == 0)
{
/*Base case: factorial of 0 is 1*/
return (1);
}
else
{
/*Recursively calculate factorial for positive numbers*/
return (n * factorial(n - 1));
}
}
