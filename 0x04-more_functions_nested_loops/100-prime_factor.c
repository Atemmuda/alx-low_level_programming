#include <stdio.h>
#include <main.h>

/**
 * largest_prime - finds the largest prime of 600851475143
 * and print ir to the screen.
 */

void largest_prime(void)
{
	long long int number;
	long long int large_factor;
	long long int i;

	number = 600851475143;
	large_factor = 0;
	i = 2;

	while (number != 1)
	{

		if (number % i == 0)
		{
			while (number % i == 0)
			{
				printf ("%lld \t", i);
				number /= i;
			}
			large_factor = i;
		}
		i++;

	}
	printf ("\n\nThe largest prime factor is : %lld\n\n", large_factor);
	return (0);
}
