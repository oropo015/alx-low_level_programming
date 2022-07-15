#include "main.h"

/**
 * leet - Function that convert a string to leet code
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, count;
	int check[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int mod[] = {'4', '3', '0', '7', '1'};
	arr_size = sizeof(check) / sizeof(int);

	for (i = 0; n[i] != '\0'; i++)
	{
		for (count = 0; count <= arr_size; count++)
		{
			if (n[i] == check[count])
			{
				n[i] = mod[count / 2];
				count = arr_size;
			}
		}
	}

	return (n);
}
