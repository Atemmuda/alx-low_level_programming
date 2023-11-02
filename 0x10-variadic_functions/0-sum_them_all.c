#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum the variable number of elements
 * @n: the number of elements
 *
 * Return: integer value of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(list, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
