#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function to create a grid
 * @width: input
 * @height: input
 * Return: array grid
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			arr[i][n] = 0;
		}
	}
	return (arr);
}
