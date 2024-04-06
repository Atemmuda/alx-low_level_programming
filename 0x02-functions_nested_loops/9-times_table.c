#include "main.h"

/**
 * times_table - a function that prints the 9 times table,
 * starting with 0
 * 
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, mul;

	for(i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

int main(void)
{
    times_table();
    return (0);
}
