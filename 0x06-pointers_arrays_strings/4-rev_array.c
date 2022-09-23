#include "main.h"

/**
*reverse_array - Reverses contents of an array of integers
*@a: Pointer to first element
*@n: Number of elements
*
* Return: Void
*/

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int tmp;

	y = n - 1;
	x = 0;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
