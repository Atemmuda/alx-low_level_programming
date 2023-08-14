#include <stdio.h>

/**
 * main - Entry of the program
 *
 * prints all the lowercase alphabets (ch)
 * follwed by all uppercase alphabets (CH)
 * Return: zero(0) for success
 */
int main(void)
{
	char ch, CH;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	CH = 'A';
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}

