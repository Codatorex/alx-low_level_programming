#include <stdlib.h>
#include "lists.h"

/**
 * free_list - empties or frees a linked list
 * @head: list_t list to be emptied
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

