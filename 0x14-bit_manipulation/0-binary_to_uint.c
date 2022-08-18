#include "main.h"

/**
 * binary_to_uint - function for conversion.
 * @b: pointer to a string
 *
 * Return: unsigned int or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		uint <<= 1;
		if (b[i] == '1')
			uint += 1;
	}
	return (uint);
}
