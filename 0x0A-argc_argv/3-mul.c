#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * Assuming the numbers and the results are integers
 * @argv: The number of elements passed at runtime
 * if > 2 print error followed by a new line and return 1
 * @argc: Character array of the element passed
 *
 * Return: value of argv[1] and argv[2]
 */
int main(int argc, char *argv[])
{
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
