#include "main.h"

/**
 * _strcat -function concatenates two strings
 * @dest: resulting/destination string
 * @src: we copy the string from this variable
 *
 * Return: a pointer to the two concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;

	while (dest[i] != '\0')
		i++;

	n = 0;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	return (dest);
}
