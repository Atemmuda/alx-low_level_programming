#include "main.h"

/**
 * _pow_recursion - finds the x to the power of y
 * @x: the upper number to find its factorial
 * @y: number of times x multiplies itself
 *
 * Return: -1 if n < 0 otherwise return x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
