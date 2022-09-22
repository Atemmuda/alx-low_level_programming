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

	n = (int)dest[0];

	for(i = 0; i < src[i] != '\0'; i++)
		dest[n + 1] = src[i];
	dest[n + 1] = '\0';

	return dest;
}
