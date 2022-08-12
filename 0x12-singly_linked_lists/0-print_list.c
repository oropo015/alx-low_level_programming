#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints list of elements passed to the funcction
 * @h: A pointer
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		node++;
		h = h->next;
	}

	return (node);
}
