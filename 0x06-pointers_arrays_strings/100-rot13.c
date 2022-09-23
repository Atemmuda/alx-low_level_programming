#include "main.h"

/**
 * rot13 - encode a string using rot13 encrypyion
 * @targ: the target string to encrypt
 * Return: the encrypted string
 */

char *rot13(char *encoded)
{
	int i;

	for(i = 0; i <= 127; i++)
	{
		if((i >= 65 || i <= 90) || (i >= 97 || i <= 122))
		{
			encoded[i] = encoded[i] + 13;
			if ((int) encoded[i] < 0)
			{
				(int)encoded[i] + 26;
			}
		}
	}

	return (encoded)
}
