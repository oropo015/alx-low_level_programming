#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char a;
	int b;
	long c;
	long long int d;
	float e;

	printf("Size of a char: %lu(s)", sizeof(a));	
	printf("Size of an int: %lu(s)", sizeof(b));
	printf("Size of a long: %lu(s)", sizeof(c));
	printf("Size of a long long int: %lu(s)", sizeof(d));
	printf("Size of a float: %lu(s)", sizeof(e));
}
