#include "main.h"

/**
 * *_memset - fills the first n bytes of memory are pointed:
 * to by s with the constant byte b
 * @s: character set pointer
 * @b: constant character byte
 * @n: first n byte in memory to fill
 *
 * Return: A pointer to to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
