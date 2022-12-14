#include "main.h"
/**
 * _strchr - fills the first n bytes of memory are pointed to by s with the constant byte b
 * @*dest: pointer of the destination string
 * @*src: pointer to the source string
 *
 * Return: A pointer to the first occurence of c in the string s or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == '\0')
		if (c == '\0')
		 rtirn (&s[i]);
	else
		return ('\0');
	return (c);
}
