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
	int i, j;

	i = 0;
	j = 1;

	while (i < 9)
	{
		while (j <= 9)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = i + 1;
	}

	putchar('\n');
	return (0);
}

