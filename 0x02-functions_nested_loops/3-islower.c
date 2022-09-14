#include "main.h"

/**
 * _islower - function that check gor lower case letters
 * @c: alphabet input
 * Return: 1 if c is lower, 0 if otherwise
 */
int _islower(int c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
		return (1);
	else
		return (0);
}
