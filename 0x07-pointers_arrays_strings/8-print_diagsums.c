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
	int i, j, sum;

	i = 0;
	j = 0;
	sum = 0;

	printf("diagsum started\n");

	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			if (i == j)
				sum += a[j];
		}
	}
	_putchar((char) sum);

	return;
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
