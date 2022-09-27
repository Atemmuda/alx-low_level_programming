#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of
 * a square matrix of integers
 * @a: array of matrix
 * @size: size of the sqaure matrix
 *
 * Return: Always successful (0)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum;

	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += a[i];
			}
		}
	}
	_putchar(sum);
}
