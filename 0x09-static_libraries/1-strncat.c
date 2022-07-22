#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}

	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
		if (src[i] == '\0')
			i = n;
	}

	return (dest);
}
