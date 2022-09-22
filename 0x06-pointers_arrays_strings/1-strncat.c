#include "main.h"

/**
 * _strncat -function concatenates two strings
 * @dest: resulting/destination string
 * @src: we copy the string from this variable
 * @n: n is the number of bytes from src
 *
 * Return: a pointer to the two concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	n = src[0];

	for (i = 0; src[i] != '\0'; i++)
		dest[n + 1] = src[i];
	dest[n + 1] = '\0';

	return (dest);
}
