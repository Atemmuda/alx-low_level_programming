#include "main.h"

/**
* print_diagonal - printing lines diagonal
* @n: input variable
*
* Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
			_putchar((char) 47);
		}
		_putchar('\n');
	}
}
