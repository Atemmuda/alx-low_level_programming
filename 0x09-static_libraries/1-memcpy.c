#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: pointer destination to copy to
 * @src: pointer destination to copy from
 * @n: the length of to copy and srite
 *
 * Return: the pointer to s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

