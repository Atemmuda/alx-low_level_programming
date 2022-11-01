#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * to determine how system reads bits
 *
 * Return: 0 if big endian (read from lsb),
 * 1 if little endian (from msb)
 */
int get_endianness(void)
{
	unsigned int i;

	if (*(char *)&i)
	{
		return (1);
	}

	return (0);
}
