#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	int compare;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (0);

	for (i = 0; i < size; i++)
		compare = cmp(array[i]);
	return (compare);
}
