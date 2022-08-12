#include "lists.h"

/**
 * list_len - search for no of elements in a linked list
 * @h: A pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *list;
	unsigned int i;

	list = h;
	for (i = 0; list; i++)
		list = list->next;
	return (i);
}
