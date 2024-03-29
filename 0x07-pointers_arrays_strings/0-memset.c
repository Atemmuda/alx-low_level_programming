#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: pointer to the character array
 * @b: constant byte character to represent all of s with
 * @n: the length of to write
 *
 * Return: the pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

