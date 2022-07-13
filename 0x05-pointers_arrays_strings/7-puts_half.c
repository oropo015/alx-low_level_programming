#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len_str;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len_str++;

	n = (len_str / 2);

	if ((len_str % 2) == 1)
		n = ((len_str + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
