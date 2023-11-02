#include "main.h"
#include <stdio.h>

/**
 * _isupper - is a function that checks if an ANSII value
 * represent an uppercase character
 * @c: int value of the charecter
 *
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

