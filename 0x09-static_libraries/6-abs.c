#include "main.h"
/**
 * _abs - give abosulte value to the integer.
 * @c : the parameter that needs to be checked.
 * Return: absolute value of the number or 0.
 */
int _abs(int c)
{
int abs_val;
if (c <= 0)
{
abs_val = c * -1;
return (abs_val);
}
return (c);
}
