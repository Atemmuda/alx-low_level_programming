#include "main.h"
/**
 *print_sign - Prints the sign on number
 * @a:integer value
 *
 * Return: -1 if negative.
 * Return: 0 if 0.
 * Return: 1 if positive.
 */
int print_sign(int a)
{
	if (a < 0)
	{
		_putchar(('+');
		return (-1);
	}
	else if (a ==0)
	{
		_putchar((char) 0);
		return (0);
	}

	_putchar((char) 1);
	return (1);
}
