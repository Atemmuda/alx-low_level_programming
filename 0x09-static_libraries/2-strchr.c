#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that copies memory area
 *
 * @s: pointer to characters to search from
 * @c: the chareacter being searched for
 *
 * Return: a pointer to the first occurrence of
 * the character c in the string s, or
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;

	if (s[i] == '\0')
	{
		if (c == '\0')
			return (&s[i]);
		else
			return ('\0');
	}
	else
		return (&s[i]);
}

