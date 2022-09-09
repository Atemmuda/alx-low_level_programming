#include <stdlib.h>
#include <time.h>
/* more headers go there */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int rem = n % 10;
	if (n > 5 )
	
		printf("Last digit of %d is %d and is greater than 5 \n", n, rem);	

	else if (rem == 0)
	
		printf("Last digit of %d is %d and is 0 \n", n, rem);
	
	else 
		printf("%d is negative", n);

	printf("\n");
	return (0);
}

