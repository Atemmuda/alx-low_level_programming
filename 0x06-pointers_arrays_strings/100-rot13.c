#include "main.h"

/**
 * rot13 - encode a string using rot13 encrypyion
 * @encoded: the target string to encrypt
 * 
 * Return: the encrypted string
 */

char *rot13(char *encoded)
{
	int a = 0, b = 0, negate = -1;
	char alpha[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";

	for (a = 0; encoded[a]; a++)
	{
		negate = 1;
		while (encoded[a] != alpha[b] && b <= 52)
		{
			negate *= -1;
			b++;
		}
		if (encoded[a] == alpha[b])
			encoded[a] = (encoded[a] + (13 * negate));
	}
	return (encoded);
}
