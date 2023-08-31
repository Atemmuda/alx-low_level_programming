#include "main.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 * @x: base number
 * @y: index
 * Return: If y is lower than 0, the function should return -1
 * else returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}