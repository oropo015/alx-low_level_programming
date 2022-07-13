#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n number items of an array
 * @a: array name
 * @n: is the number of items of an array
 * Return: input
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	printf("\n");
}
