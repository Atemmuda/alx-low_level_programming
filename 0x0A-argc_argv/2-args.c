#include "main.h"
#include <stdio.h>

/**
 * main - Print all the argument it  recieves
 * All the arguments should be printed
 * including the first one
 * Only print the one argument per line, ending with a new line
 * @argv: The number of elements passed at runtime
 * @argc: Character array of the element passed
 *
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
