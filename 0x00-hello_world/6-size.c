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
	printf("Size of a char: %d byte(s)", (int)(sizeof(char)));
	printf("Size of an int: %d bytes(s)", (int)(sizeof(int)));
	printf("Size of a long int: %d byte(s)", (int)(sizeof(long int)));
	printf("Size of a long long int: %d byte(s)", (int)(sizeof(long long int)));
	printf("Size of a float: %d byte(s)", (int)(sizeof(float)));
	return (0);
}

