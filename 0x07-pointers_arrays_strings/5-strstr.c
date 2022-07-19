#include "main.h"
#include <stdio.h>

/**
 * _strstr - function to look for needle in haystack
 * @haystack: input
 * @needle: input
 * Return: 0 
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *ned = needle;

		while (*hay == *ned && *ned != '\0')
		{
			hay++;
			ned++;
		}

		if (*ned == '\0')
			return (haystack);
	}

	return (NULL);
}
