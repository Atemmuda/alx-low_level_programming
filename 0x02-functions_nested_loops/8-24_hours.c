#include "main.h"

/**
 * jack_bauer: Print the time in 00:00 format
 */
void jack_bauer(void)
{
	int min;
	int h;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar((char) 10);
		}
	}
}
