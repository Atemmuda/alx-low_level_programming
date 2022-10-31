#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a given binary to an decimal value
 * @b: pointer to binary string
 *
 * Return: The decimal value or 0 when b is NULL or b[i]
 * is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, decimal;
	int bit, length, multiplier = 1, count = 0;

	if (b == NULL)
	{
		return (0);
	}
	length = _strlen(b);
	for (i = (length - 1); i > 0; i--, count++)
	{
		bit = b[i] - '0';
		if (bit != 0 && bit != 1)
		{
			return (0);
		}
		multiplier = power(count);

		decimal += multiplier * bit;
	}
	return (decimal);
}

/**
 * _strlen - finds the length of string
 * @s: the string pointer
 *
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;
	return (i);
}

/**
 * power - finds two to the power
 * @count: The number of occurence of two
 *
 * Return: 2 to the power of occurences
 */

int power(int count)
{
	int m = 1, i = 0;

	for (i = 0; i < count; i++)
	{
		m *= 2;
	}

	return (m);
}
