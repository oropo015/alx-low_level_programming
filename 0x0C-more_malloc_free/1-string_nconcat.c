#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concat lenght of s1 and n lenght of s2
 * @s1: input from s1
 * @s2: input from s2
 * @n: number of bytes from s2
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	str = malloc(sizeof(char *) * (j + 1));

	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (l = 0; k < j; l++)
	{
		str[k] = s2[l];
		k++;
	}
	k++;
	str[k] = '\0';
	return (str);
}
