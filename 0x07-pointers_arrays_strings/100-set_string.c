#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 *
 * @s: pointer to pointer "to"
 * @to: pointer to char
 */
void set_string(char **s, char *to)
{
	*s = &*to;
}

