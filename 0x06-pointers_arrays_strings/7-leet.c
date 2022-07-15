#include "main.h"

/**
 * leet - Function that convert a string to leet code
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, a;
	int check[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int mod[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (n[i] == check[a])
			{
				n[i] = mod[a / 2];
				a = 9;
			}
		}
	}

	return (n);
}
