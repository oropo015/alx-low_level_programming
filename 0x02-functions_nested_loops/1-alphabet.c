#include "main.h"
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 */

void print_atoz(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
