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
	int i, j, k;

	i = 0;

	while (i < 7)
	{
		k = j + 1;
		while (j < 8)
		{
			k = j + 1;
			while (k < 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 6 || j != 7 || k != 8)
				{
					putchar(',');
					putchar(' ');
				}

				k++;
			}

			j++;

		}
		i++;
	}

	putchar('\n');
	return (0);
}

