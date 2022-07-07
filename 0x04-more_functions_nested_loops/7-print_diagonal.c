#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line
 * @n: input number '\'
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int line, dia;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			for (dia = 1; dia < line; dia++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
