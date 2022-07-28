#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - Outputs array of int
 * @min: min input
 * @max: max input
 * Return: pointer of ints
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, count;

	if (min > max)
		return (NULL);

	for (count = 0; count < (max - min); count++)
	{
	}
	arr = malloc(sizeof(int) * (count + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
