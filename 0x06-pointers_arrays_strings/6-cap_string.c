#include "main.h"

/**
 * cap_string - function that capitalizes a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int i, a;
	int upper = 32;
	int sep[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - upper;
		}

		upper = 0;

		for (a = 0; a <= 12; a++)
		{
			if (n[i] == sep[a])
			{
				a = 12;
				upper = 32;
			}
		}
	}
	return (n);
}
