#include "main.h"

/**
 * _memset - Main function
 * @s: Dest
 * @b: Constant
 * @n: Number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
