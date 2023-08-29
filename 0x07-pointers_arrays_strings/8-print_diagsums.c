#include "main.h"
#include <stdio.h>


/**
 * print_diagsums: prints the sum od the daigonal
 * of the n*m dimanentional array
 *
 * @a: pointer to the array
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, row_major, sum_left, sum_right;

	sum_left = 0;
	sum_right = 0;

	j = 0;
	for (i = 0; i < size; i++)
	{
		row_major = (size * i) + j;
		sum_left += *(a + row_major);
		j++;
	}
	printf("%d, ", sum_left);

	j = size - 1;
	row_major = 0;
	for (i = 0; i < size; i++)
	{
		row_major = (size * i) + j;
		sum_right += *(a + row_major);
		j--;
	}
	printf("%d\n", sum_right);
}

