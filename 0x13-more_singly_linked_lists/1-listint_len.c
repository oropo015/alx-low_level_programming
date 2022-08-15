#include "lists.h"

/**
 * listint_len -A function that returns number of elements in linked listint_t list.
 * @h: pointer to the linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
