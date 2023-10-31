#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that copies memory area
 *
 * @haystack: pointer to characters to search from
 * @needle: the pointer to chareacter being searched for
 *
 * Return: a pointer to the first occurrence of
 * the characters needle in the string haystack, or
 * NULL if the character is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, size, x;

	size = 0;

	for (j = 0; needle[j] != '\0'; j++)
	{
		size++;
	}

	if (size == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			x = 0;
			while (x < size && haystack[i + x] == needle[x])
			{
				if (x == (size - 1))
					return (&haystack[i]);
				x++;
			}
		}
	}

	if (haystack[i] == '\0' && needle[x] == '\0')
		return (&haystack[i]);

	/* Not found*/
	return ('\0');
}

