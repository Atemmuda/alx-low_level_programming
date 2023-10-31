#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: the ascii value for the character to check
 *
 * Return: 1 if character is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 172)
		return (1);
	return (0);
}

