#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: input array of integers
 *
 * @n: number of elements in array
 *
 */

void reverse_array(int *a, int n)
{
	int i, end, holder;

	end = n - 1;

	for (i = n; i >= 0; i--)
	{
		_putchar((char) a[i]);
	}
}
