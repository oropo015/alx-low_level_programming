#include <stdio.h>

/**
 * print_alphabet - prints all alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
