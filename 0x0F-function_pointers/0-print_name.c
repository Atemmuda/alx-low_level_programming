#include "function_pointers.h"

/**
 * print_name - print the name of the string characters passed to f
 * @name: string to print
 * @f: pointer the function that print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
