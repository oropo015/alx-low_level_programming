#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that return a new node at the beginning of a listint_t list.
 * @head: double pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Return: a node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = new;
	return (new);
}
