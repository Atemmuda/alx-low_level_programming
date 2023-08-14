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
	char ch;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}

