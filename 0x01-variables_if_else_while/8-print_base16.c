#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * c - hold the curent value of the alphabet
 * num - hold the number part of number
 *
 * Return: 0 after printing the funtion
 */
int main(void)
{
	char ch;
	int num;

	ch = 'a';
	num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	while (ch <= 'f')
	{
		putchar((int) ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
