#include "main.h"

/**
 * print_number - print integer value
 * @n: input integer value
 *
 */

void print_number(int n)
{
	int i = 0;
	int num = n;
	int e = 0;
	int divider = 0;
	int counter = 0;

	while (num / 10 != 0)
	{
		num = num / 10;
		counter++;
	}

	for (e = counter; e >= 0; e--)
	{
		divider = 1;
		for (i = 0; i < e; i++)
		{
			divider = divider * 10;
		}
		if (n < 0)
		{
			_putchar('-');
			_putchar((0 - (n / divider)) + '0');
			n = n % divider;
			n = n - 0;
		}
		else if (n > 0)
		{
			_putchar((n / divider) + '0');
			n = n % divider;
		}
		else
			_putchar('0');
	}
}
