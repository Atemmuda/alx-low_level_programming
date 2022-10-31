#include "main.h"

/**
 * binary_to_uint - converts a given binary to an decimal value
 * @b: pointer to binary string
 *
 * Return: The decimal value or 0 when b is NULL or b[i]
 * is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base, i, decimal;

	if (b == '\0')
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		i++;
	}

	base = 1;
	while (i >= 0)
	{
		decimal += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}

	return (decimal);
}

int main(void)
{
	unsigned int vl = binary_to_uint("");
	printf("%d", vl);

	return (0);
}
