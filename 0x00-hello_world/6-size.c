#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float e;
	printf("Size of a char: %lu(s)\n", sizeof(a));	
	printf("Size of an int: %lu(s)\n", sizeof(b));
	printf("Size of a long: %lu(s)\n", sizeof(c));
	printf("Size of a long long int: %lu(s)\n", sizeof(d));
	printf("Size of a float: %lu(s)\n", sizeof(e));
}
