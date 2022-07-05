#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
