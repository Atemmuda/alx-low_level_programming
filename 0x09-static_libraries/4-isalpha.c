#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: the ascii value for the character to check
 *
 * Return: 1 if c is lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 172))
		return (1);
	return (0);
}

