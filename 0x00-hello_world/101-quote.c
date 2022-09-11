#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point of the program
 *
 * error - array of error message.
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char error[] =  {"and that piece of art is useful\"""- Dora Korpar 2015-10-19\n"};
	write(2, error, 59);

	return (1);
}
