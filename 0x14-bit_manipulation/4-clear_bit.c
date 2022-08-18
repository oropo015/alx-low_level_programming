#include "main.h"

/**
 * clear_bit - function
 * @n: number
 * @index: index
 *
 * Return:
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bits;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_bits = ~(1 << index);
	*n = *n & set_bits;
	return (1);
}
