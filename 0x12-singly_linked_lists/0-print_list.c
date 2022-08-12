#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints list of elements passed to the funcction
 * @h: A pointer
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *list;
	unsigned int i;

	list = h;
	for (i = 0; list; i++)
	{
		printf("[%u] %s\n", list->len, list->str);
		list = list->next;
	}
	return (i);
}
