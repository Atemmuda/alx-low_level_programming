#include "main.h"

/**
 * set_bit - function to set value of bit at specific index to be 1
 * @n: the valuse to get a specific bit of
 * @index: index is the index, starting
 * from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int num = *n;

	if (index > sizeof(*n) * 8)
		return (-1);
	for (i = 0; i < index; i++)
	{
		num = (num >> 1);
	}
	num = num | 1;
	num = num << index;
	*n = (num | *n);
	return (1);
}
