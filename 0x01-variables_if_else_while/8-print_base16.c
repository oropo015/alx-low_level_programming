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
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}