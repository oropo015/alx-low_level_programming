#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  print elements function listint_t list.
 * @h: list of itemsto  print
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
