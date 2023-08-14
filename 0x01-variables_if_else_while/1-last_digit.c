#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point of program
  *
  * program will assign a random number to the
  * variable n each time itis executed.
  * Then prints according to the conditions.
  *
  * Return: zero(0) on success
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d is greater than 5\n", n, last_digit);

	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);

	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);
	return (0);
}
