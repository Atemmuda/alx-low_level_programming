#include <stdio.h>

/**
 * main - Entry of the program
 *
 * prints first 10 base ten numbers
 *
 * Return: zero(0) for success
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	putchar('\n');
	return (0);
}

