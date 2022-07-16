#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: input
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int j, a = 1, count, m;
	
	if (n < 0)
		j = n * -1;
	else
		j = n;
	for (count = 0; j != 0; count++)
		j = j / 10;
	while (count > 1)
	{
		a = a * 10;
		count --;
	}
	while (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		m = n / a;
		n = n % a;
		a = a / 10;
		_putchar(m + '0');
	}
}
