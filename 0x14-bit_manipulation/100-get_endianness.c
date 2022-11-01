#include "main.h"

/**
 * int get_endianess - a function that checks the endianness.
 * to determine how system reads bits
 *
 * Return: 0 if big endian (read from lsb),
 * 1 if little endian (from msb)
 */
int get_endianness(void)
{
        unsigned int i;
        if (*(char *)&i == 1)
        {
                return (1);
        }

        return (0);
}