#include "main.h"
/**
 * times_table - adds two numbers anr produce the answer
 * @a:first integer value
 * @b:second integer value
 *
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
		}
	}
}
