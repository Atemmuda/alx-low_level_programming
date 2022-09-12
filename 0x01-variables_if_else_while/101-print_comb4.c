#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: 0 after printing the funtion
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		putchar(i);
		putchar(i);
		putchar('\n');
	}

	putchar('\n');
	return (0);
}
