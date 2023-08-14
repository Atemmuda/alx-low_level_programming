#include <stdio.h>

/**
 * main - Entry of the program
 *
 * prints all the aphabets in lowercase
 * in reverse order
 *
 * Return: zero(0) for success
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}

