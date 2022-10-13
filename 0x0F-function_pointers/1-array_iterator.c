#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates over array of of the size
 * @array: array to iterate over
 * @size: size of the array, hence the limit of iteration
 * @action: function pointer which take in integer
 * hence array[i]
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
