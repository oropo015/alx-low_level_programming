#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Function that prints anything
 * @char: num of input
 * @format: list of args
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int n = 0, i = 0;
	char *seperator = ", ";
	char *str;

	va_start(ptr, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			seperator = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(ptr, int), seperator);
			break;
		case 'i':
			printf("%d%s", va_arg(ptr, int), seperator);
			break;
		case 'f':
			printf("%f%s", va_arg(ptr, double), seperator);
			break;
		case 's':
			str = va_arg(ptr, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, seperator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(ptr);
}
