#include "main.h"

/**
 * print_number - function that prints integers
 * @n:  number
 * Return: 0
 */
void print_number(int n)
{
	int j = n, a = 1, count, m;

	for (count = 0; j != 0; count++)
		j = j / 10;
	while (count > 1)
	{
		a = a * 10;
		count --;
	}

	while (n != 0)
	{
		m = n / a;
		n = n % a;
		a = a / 10;
		_putchar(m + '0');
	}

}
