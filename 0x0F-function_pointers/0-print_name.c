#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - is a function
 * @name: name
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
