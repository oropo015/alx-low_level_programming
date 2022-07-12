#include "main.h"

/**
 * swap_int - Funtion that swaps two inputs
 * @a : input from function
 * @b : input from function
 */
void swap_int(int *a, int *b)
{
	int *n;
	int *m;

	n = a;
	m = b;

	a = m;
	b = n;
}
