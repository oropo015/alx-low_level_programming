#include "main.h"
#include <stdio.h>

/**
 * _strchr - function tosearch for a char
 * @s: input 1
 * @c: input 2
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
