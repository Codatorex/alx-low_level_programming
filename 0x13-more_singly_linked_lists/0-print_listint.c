#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - that prints the whole elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}