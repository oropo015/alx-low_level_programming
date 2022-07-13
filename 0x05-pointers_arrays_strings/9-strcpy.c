#include "main.h"

/**
 * char *_strcpy - function that copies the string
 * @dest: Destion
 * @src: Source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
