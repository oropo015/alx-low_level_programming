#include "main.h"

/**
 * _strspn - Main function
 * @s: Source
 * @accept: Charater to find
 * Return: Destination;
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, c;
	
	count = 0;
	c = 0;
	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				c = 1;	
			}
		}
		if (c != 1)
			return (count);
	}
	return (count);
}
