#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to the string to check for
 * @accept: pointer to the string to be seached from
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return ('\0');
}

