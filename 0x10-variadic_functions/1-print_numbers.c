#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function that prints list of inputd
 * @separator: comma(,)
 * @n: input to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
