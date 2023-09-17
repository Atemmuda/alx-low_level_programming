#include "main.h"

/**
 * print_last_digit - a function that prints the
 * last digit of a number.
 * @a: integer parameter to return its last digit
 *
 * Return: a % 10
 */
int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;
	if(last_digit < 0)
	{
		last_digit = 0 - last_digit;
	}
	_putchar(last_digit + '0');
	return ( last_digit);
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
