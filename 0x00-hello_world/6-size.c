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
	printf("Size of a char: %d", (int)(sizeof(char)));
	printf("Size of an int: %d", (int)(sizeof(int)));
	printf("Size of a long int: %d", (int)(sizeof(long int)));
	printf("Size of a long long int: %d", (int)(sizeof(long long int)));
	printf("Size of a float: %d", (int)(sizeof(float)));
	return (0);
}

