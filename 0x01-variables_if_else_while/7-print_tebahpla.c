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
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}

