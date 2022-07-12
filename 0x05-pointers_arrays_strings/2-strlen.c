#include "holberton.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1;
	int total = 0;
	char alpha = s[0];

	while (alpha != '\0')
	{
		total++;
		alpha = s[i++];
	}
	return (total);
}
