#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Allocates Memory to malloc
 * @b: Size of memory
 * Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
