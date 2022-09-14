#include "main.h"

/**
 * print_alphabet - Prints all the alphabets, a-z ten times
 *
 * Return: always 0 success
 */
void print_alphabet(void)
{
	char alpha;
	int index;

	alpha = 'a';

	for (index = 0; index < 10; index++)
	{
		while (alpha <= 'z')
		{
			_putchar((int) alpha);
			alpha++;
		}
		_putchar((char) 10);

	}
	return(void);
}
