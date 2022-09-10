#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * rem - holds the of n / 10
 *
 * Return: 0 after printing the funtion
 */
int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;

	if (rem > 5)
		printf("Last digit of %d" " is %d" " and is greater than 5", n, rem);
	else if (rem == 0)
		printf("Last digit of %d" " is %d" " and is 0", n, rem);
	else if (rem < 6 && rem != 0)
		printf("Last digit of %d" " is %d" " less than %d" " and not %d"
				" is less than 6 and not 0", n, rem, 6, 0);

	printf("\n");
	return (0);
}
