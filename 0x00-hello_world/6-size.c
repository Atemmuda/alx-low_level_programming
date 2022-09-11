#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return - whan all is done correctly give me 0
 */

int main(void)

{
	int i;
	long int li;
	long long int lli;
	char ch;
	float fl;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}

