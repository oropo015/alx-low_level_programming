#include "main.h"

/**
 * _strchr - Main function
 * @s: Source
 * @c: Charater to find
 * Return: Destination;
 */
char *_strchr(char *s, char c);
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
