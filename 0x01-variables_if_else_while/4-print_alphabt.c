#include <stdio.h>

/**
 * main - Entry of the program
 *
 * prints all the aphabets in lowercase except 'e' and 'q'
 *
 * Return: zero(0) for success
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}

