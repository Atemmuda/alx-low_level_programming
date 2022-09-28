#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n: the upper number to find its factorial
 *
 * Return: -1 if n < 0 otherwise return n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
