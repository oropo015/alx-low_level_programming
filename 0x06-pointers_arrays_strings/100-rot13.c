#include "main.h"

/**
 * rot13 - encodes a string to rot13
 * @s: string
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int i, j;
	char alpha1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alpha1[j] == *(s + i))
			{
				*(s + i) = alpha2[j];
				break;
			}
		}
	}
	return (s);
}
