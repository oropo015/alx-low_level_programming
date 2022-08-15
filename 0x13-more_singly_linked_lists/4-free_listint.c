#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  function that frees listint_t list.
 * @head: pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
