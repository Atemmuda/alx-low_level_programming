#include <stdio.h>

/**
 * main - Entry of the program
 *
 * prints all the lowercase alphabets (ch)
 * follwed by all uppercase alphabets (CH)
 *
 * Return: zero(0) for success
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(i);
		putchar(20);
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(20);
			putchar('\0');
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}

