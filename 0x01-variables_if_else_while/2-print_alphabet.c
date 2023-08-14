#include <stdio.h>

/**
 * main - Entry of the program
 *
 * prints all the aphabets in lowercase
 *
 * Return: zero(0) for success
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}

