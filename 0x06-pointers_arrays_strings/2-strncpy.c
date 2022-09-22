/**
* _strncpy -function concatenates two strings
* @dest: resulting/destination string
* @src: we copy the string from this variable
* @n: number of characters to copy
*
* Return: a pointer to the two concatenated strings
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}

		for ( ; i < n; i++)
		{
			dest[i]  = '\0';
		}
	}
}
