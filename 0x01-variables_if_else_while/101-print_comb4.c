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
	int y = 2;

	for (i = 0; i < 10; i++)
	{
		for (j = x; j < 10; j++)
		{
			for (k = y; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
			}
			x++;
			y++;
		}
		x++;
		y++;
	}
	return (0);	
}
