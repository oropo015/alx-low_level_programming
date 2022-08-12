#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees list_t list
 * @head: A pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p, *q;

	p = head;
	while (p != NULL)
	{
		q = p->q;
		free(p->str);
		free(p);
		p = q;
	}

}
