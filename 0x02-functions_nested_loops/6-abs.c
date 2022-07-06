#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @ab: - accept integer value
 * Return: integer value of abs
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
