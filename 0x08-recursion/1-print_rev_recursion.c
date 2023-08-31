#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string,
 * followed by a new line.
 * @s: pointer to the string to print
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[-1]);
	}
}

