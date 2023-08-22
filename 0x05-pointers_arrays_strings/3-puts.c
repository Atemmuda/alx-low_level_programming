#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line.
 * @str: character pointer to the string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;
	char pp;

	pp = str[0];

	for (i = 0; pp != '\0'; i++)
	{
		pp = str[i];
		_putchar(pp);
	}
	_putchar('\n');
}

