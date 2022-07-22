#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 * atoi is a converts a string into an int
 * @argc: arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, count = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			count *= atoi(argv[i]);
		}
		printf("%d\n", count);
	}
	return (0);
}
