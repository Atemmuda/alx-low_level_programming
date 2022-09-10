#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * c - hold the curent value of the alphabet
 *
 * Return: 0 after printing the funtion
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar((int) ch);
		ch--;
	}

	putchar('\n');
	return (0);
}
