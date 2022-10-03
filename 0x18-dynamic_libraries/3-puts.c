#include "main.h"
#include <stdio.h>

/**
 * _puts - Fuction to print a string
 * @str: Input from the function
 * Return: Returns a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
