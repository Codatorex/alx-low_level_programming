#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to be returned, starting at 0.
 * Return: Pointe to nth node or  NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i;
for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}
if (i == index && current != NULL)
{
return (current);
}
else
{
return (NULL);
}
}
