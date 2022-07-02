#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int check_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	check_num = n % 10;
	if (check_num < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,check_num);
	else if (check_num > 0)
		printf("Last digit of %d is %d and is greater than 5\n", n,check_num);
	else if (check_num == 0)
		printf("Last digit of %d is %d and is 0", n, check_num);
	return (0);
}
