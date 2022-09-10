#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * num - holds the number between 0 an 10
 *
 * Return: 0 after printing the funtion
 */
int main(void)
{
	int num;

	num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
