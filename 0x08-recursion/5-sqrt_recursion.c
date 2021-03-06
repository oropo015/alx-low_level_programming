#include "main.h"
int squareroot(int n, int i);
/**
 * _sqrt_recursion - checks for perfect square
 * @n: input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot -  perfect square
 * @n: input
 * @i: counter
 * Return: square root
 */
int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
