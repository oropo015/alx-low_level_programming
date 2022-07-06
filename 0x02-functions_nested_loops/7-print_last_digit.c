#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @nld: - accept integer value
 * Return: integer value of abs
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
