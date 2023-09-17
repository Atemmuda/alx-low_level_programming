#include "main.h"

/**
 * print_alphabet_x10 - print all the lowercase alphabets 10 times
 * I used ascii value but can also use characters directly
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 97; a <= 122; a++)
			_putchar(a);
	_putchar('\n');
	}
}

