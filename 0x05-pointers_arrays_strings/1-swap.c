#include "main.h"

/**
* swap_int - a function that swaps the values of two integers
* @a: 1st input for swap
* @b: 2nd input for swap
* Return: integers
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
