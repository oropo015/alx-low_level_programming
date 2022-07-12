#include "main.h"

/**
 * swap_int - Funtion that swaps two inputs
 * @a : input from function
 * @b : input from function
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
