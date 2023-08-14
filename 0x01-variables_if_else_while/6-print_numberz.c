#include <stdio.h>

/**
 * main - Entry of the program
 *
 * prints first 10 base ten numbers
 * using the ascii representation
 *
 * Return: zero(0) for success
 */

int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}

