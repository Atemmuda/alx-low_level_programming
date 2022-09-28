#include "main.h"
/**
 * _memcpy - fills the first n bytes of memory are pointed to by s with the constant byte b
 * @dest: pointer of the destination string
 * @src: pointer to the source string
 * @n: first n byte in memory to fill
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
