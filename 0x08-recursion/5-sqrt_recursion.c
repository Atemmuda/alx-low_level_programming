#include "main.h"
int square_root(int n, int i);

/**
 * _sqrt_recursion - finds the squareroot of n
 * @n: number to find its square root
 *
 * Return: -1 if n has not natural
 * otherwise return
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, (n / 2) + 1));
	}
}
/**
 * square_root - check for perfect square
 * @n: number to check its perfection
 * @i: counter against n
 *
 * Return: The square roo of n
 */
int square_root(int n, int i)
{
	if (i < 0 || n < 0 || i == 0 || n == 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (square_root(n, i - 1));
}
