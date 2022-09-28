#include "main.h"

/**
 * _strlen_recursion - finds the factorial of a given number
 * @s: the upper number to find its factorial
 *
 * Return: - the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
