#include "main.h"
/**
 *print_sign - Prints the sign on number
 * @a:integer value
 *
 * Return: -1 if negative 0 if a is zero and 1 otherwise.
 */
int print_sign(int a)
{
	if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (a == 0)
	{
		_putchar((char) a)
		_putchar((char) 0);
		return (0);
	}

	_putchar('+');
	return (1);
}
