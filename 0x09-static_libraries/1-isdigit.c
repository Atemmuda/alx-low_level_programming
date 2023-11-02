#include "main.h"

/**
 * _isdigit - is a function that checks if an ASCII value
 * represent a digit
 * @c: int value of the digir
 *
 * Return: 1 if c is digit[0 through 9] 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

