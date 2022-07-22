#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 * atoi is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
