#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - Prints a random number and states whether
 *        it is positive, negative, or zero.
 * @i: the parameter needs to be checked.
 * Return: positive if it's greater than 0, negative less than 0, 0.
*/
void positive_or_negative(int i)
{
srand(time(0));
/* your code goes there */
i = rand() - RAND_MAX / 2;
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}

}
