#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the sizes of data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}

