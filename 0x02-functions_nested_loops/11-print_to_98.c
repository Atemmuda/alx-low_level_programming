#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print numbers from n to 98,
 * @a:first integer value
 *
 * Return: the summation.
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if  (i == 98)
				printf("%d, ", i);
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d, ", j);
		}
	}
}
