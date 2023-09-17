#include "main.h"

/**
 * print_alphabet - print all the lowercase alphabets
 * I used ascii value but can also use characters directly
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
