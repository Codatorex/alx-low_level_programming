#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: Double pointer to the head of the linked list.
 * @idx: Unsigned int shows the idx where the new node has be inserted, idx 0.
 * @n: Integer representing the data for the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails to insert the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current = *head;
if (head == NULL)
{
return (NULL);
}
if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = current;
*head = new_node;
return (new_node);
}
while (idx > 1)
{
if (current == NULL)
{
return (NULL);
}
current = current->next;
idx--;
}
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
