#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *This program print whether a value is positive, negative or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%dis positive\n", n);

	else if (n == 0)
		printf("%dis zero\n", n);

	else
		printf("%d is negative", n);

	printf("\n");
	return (0);
}

