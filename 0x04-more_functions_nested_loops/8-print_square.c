#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of both l & w
 * Return: a square
 */
void print_square(int size)
{
	int line, a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			_putchar('#');
			for (a = 2; a <= size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
