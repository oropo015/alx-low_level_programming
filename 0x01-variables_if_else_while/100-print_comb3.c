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
	int i;
	int j;
	int x = 1;

	i = 0;
	while (i < 10)
	{
		for (j = x; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
		x++;
	}
	putchar('\n');
	return (0);
}
