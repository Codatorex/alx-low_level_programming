#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
**/

int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
{
arr[i] = min;
}
return (arr);
}
