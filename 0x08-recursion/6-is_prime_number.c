#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime - prime nmber checker function(helper function)
 * @n: input to check prime number
 * @i: input
 * Return: is_prime
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i - 1));
}

/**
 * is_prime_number - main function
 * @n: input
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (is_prime(n, n / 2) > 0)
		return (1);
	return (0);
}

