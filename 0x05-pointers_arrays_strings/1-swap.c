#include "main.h"

/**
 * swap_int - swap two integers.
 * @a: first int pointer
 * @b: second int pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

