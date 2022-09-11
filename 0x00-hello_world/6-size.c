#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;
	long int li;
	long long int lli;
	char ch;
	float fl;

	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}

