#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - ctreate array of characters, initialize with
 * specicfic characters
 * @size: input size of array
 * @c: input character to initialize with
 *
 * Return: initialised character array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *) malloc(sizeof(char) * size);

	if (size == 0 || *array == '\0')
	{
		return (0);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar(array[i]);
			*(array + i) = c;
		}
	}
	*(array + i) = '\0';
	free(array);
	return (array);
}
