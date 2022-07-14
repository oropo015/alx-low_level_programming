#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: copy 
 * @src: copy 
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int len, n;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}

	for (n = 0; (dest[len + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
