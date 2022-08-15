#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function
 * @head: double pointer
 *
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	new = *head;
	*head = new->next;
	n = new->n;
	free(new);
	return (n);
}
