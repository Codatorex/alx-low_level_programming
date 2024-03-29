#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - rm the node at position in listint_t linked list.
 * @head: A double pointer to the head node of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i = 0;
if (*head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
while (current != NULL && i < index)
{
prev = current;
current = current->next;
i++;
}
if (current == NULL)
return (-1);
prev->next = current->next;
free(current);
return (1);
}
