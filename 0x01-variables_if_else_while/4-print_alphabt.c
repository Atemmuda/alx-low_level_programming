#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * ch - holds the of the value of the smaller alphabet
 *
 * Return: 0 after printing the funtion
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar((int) ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
