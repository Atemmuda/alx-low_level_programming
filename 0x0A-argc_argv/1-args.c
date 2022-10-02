#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the file
 * This program print a number followed by new line
 * @argv: The number of elements passed at runtime
 * @argc: Character array of the element passed
 *
 * Return: 0 always success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
