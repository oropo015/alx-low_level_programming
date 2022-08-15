#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function
 * @head: double pointer to the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
	}
}
