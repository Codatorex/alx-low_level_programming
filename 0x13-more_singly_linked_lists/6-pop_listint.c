#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - Deletes the head node of a listint_t,returns head node’s.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The data stored in the head node, or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
int data;
listint_t *temp;
if (*head == NULL)
{
return (0);
}
data = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (data);
}
