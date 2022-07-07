#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints from 1 to 100
 * 3 multiples Fizz instead of the number
 * 5 multiples Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char ab[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", ab);
		else if (i % 3 == 0)
			printf("%s ", a);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
