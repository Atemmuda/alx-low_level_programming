#include "main.h"

/**
 * int get_endianess - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
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