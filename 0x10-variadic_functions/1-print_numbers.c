#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the numbers separated by string (*s)
 * @separator: separates the numbers
 * @n: number of elements of variable arguments
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (n <= 0)
	{
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%s", separator);

		else if (separator && i == 0)
			printf("%s", separator);

		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);
}
