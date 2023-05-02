#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the first node in the list.
 */
void free_listint2(listint_t **head)
{
listint_t *current, *tmp;
if (head == NULL)
return;
current = *head;
while (current != NULL)
{
tmp = current;
current = current->next;
free(tmp);
}
*head = NULL;
}
