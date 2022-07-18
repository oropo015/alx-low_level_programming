#include "main.h"

/**
 * _memcpy - Main function
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 * Return: Destination;
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i = 0;
	
	while (n >=0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
