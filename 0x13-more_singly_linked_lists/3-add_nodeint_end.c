#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function that returns a new node at end of listint_t list.
 * @head: double pointer
 * @n: add to the list
 *
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1;
	listint_t *node2;

	if (head == NULL)
		return (NULL);
	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);
	node1->n = n;
	node1->next = NULL;
	if (*head == NULL)
	{
		*head = node1;
		return (node1);
	}
	node2 = *head;
	while (node2->next != NULL)
	{
		node2 = node2->next;
	}
	node2->next = node1;
	return (node1);
}
