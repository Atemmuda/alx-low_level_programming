#include "main.h"

/**
 * _strlen - calculate the length of a string.
 * @s: pointer to the string
 *
 * Return: integer length of the string
 */

int _strlen(char *s)
{
	int len, i;
	char pp;

	len = 0;
	pp = s[0];

	for (i = 1; pp != '\0'; i++)
	{
		len++;
		pp = s[i];
	}

	return (len);
}

