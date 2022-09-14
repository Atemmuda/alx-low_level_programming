#include "main.h"
/**
 * times_table - prints the nine times table.
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 49; i <= 58; i++)
	{
		for (j = 49; j <= 58; j++)
		{
			k = i * j;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
			_putchar(10);
		}
	}
}
