#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concat a two strings
 * @s1: input
 * @s2: input
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int start, end, i = 0;
	char *arr;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (start = 0; start <= *s1; start++)
	{
	}

	for (end = 0; end <= *s2; end++)
	{
	}

	arr = malloc(sizeof(char) * (start + end + 1));

	if (arr == NULL)
		return (NULL);

	while (*s1)
	{
		arr[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		arr[i] = *s2;
		i++;
		s2++;
	}
	return (arr);
}
