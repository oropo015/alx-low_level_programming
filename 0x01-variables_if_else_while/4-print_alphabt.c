#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');

	return (0);
}
