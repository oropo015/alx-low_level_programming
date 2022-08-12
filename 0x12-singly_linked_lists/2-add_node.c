#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - gtes length of a string
 * @str: A string
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	{

	}
	return (i);
}

/**
 * add_node - FUNCTION TO ADD node
 * @head: a pointer
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_n;

	if (str == NULL)
		return (NULL);
	add_n = malloc(sizeof(list_t));
	if (add_n == NULL)
		return (NULL);
	add_n->str = strdup(str);
	if (add_n->str == NULL)
	{
		free(add_n);
		return (NULL);
	}
	add_n->len = _strlen(add_n->str);
	add_n->next = *head;
	*head = add_n;
	return (add_n);
}
