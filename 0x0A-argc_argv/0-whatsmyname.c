#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the file
 * if you rename the program,it will print the new name
 * without having to compile again.
 * You should not remove the path before the name of the program
 * @argv: The number of elements passed at runtime
 * @argc: Character array of the element passed
 *
 * Return: 0 always success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
