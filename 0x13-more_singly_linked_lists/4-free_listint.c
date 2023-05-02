#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first element of the list
 **/
void free_listint(listint_t *head)
{
listint_t *current = head;
while (current != NULL)
{
listint_t *next = current->next;
free(current);
current = next;
}
}
