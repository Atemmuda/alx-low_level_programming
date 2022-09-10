#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * ch - holds the of the value of the smaller alphabet
 * CH - holds the value of capital alphabet
 *
 * Return: 0 after printing the funtion
 */
int main(void)
{
	char ch;
	char CH;

	ch = 'a';
	CH = 'A';

	while(ch <= 'z')
	{
		putchar((int) ch);
		putchar('\n');
	}

	while(CH <= 'Z')
	{
		putchar((int) CH);
		putchar('\n');
	}

	putchar('\n');
	return (0);
}
