#include "lists.h"
#include <stdlib>
#include <stdio.h>

/**
 * print_dlistint - prints data in nodes
 * @h: head of node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
