#include "main.h"

/**
 * more_numbers - function that prints 10 times numbers 0 to 14
 * _putchar 
 * Return: new line
 */
void more_numbers(void)
{
	int i, num;

	for (num = 0; num < 10; num++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
