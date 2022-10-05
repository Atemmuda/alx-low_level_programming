#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two numbers
 * @argv: The number of elements passed at runtime
 * @argc:  character array of elements
 * if argc[1] == NULL print 0
 * if argc[i] is not digit, print error
 *
 * Return: 0 on success or 1 on error
 */
int main(int argc, char *argv[])
{
	int  i, sum, j;

	sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i <= (argc - 1); i++)
		{
			for (j = 0; j < argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
