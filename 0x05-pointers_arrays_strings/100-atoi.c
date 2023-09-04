#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: pointer to the string
 *
 * Return: the intger for the string
 */
int _atoi(char *s)
{
	int i, sign, plus_count, minus_count, num_for_str;

	i = 0;
	sign = 1;
	num_for_str = 0;
	plus_count = 0;
	minus_count = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			i++;
		}
		if (s[i] == '+')
		{
			i++;
			plus_count += 1;
		}
		else if (s[i] == '-')
		{
			sign = -1;
			i++;
			minus_count += 1;
		}
		if (s[i] >= '0' && s[i] <= '9')
			num_for_str = num_for_str * 10 + s[i] - '0';
		else if (s[i] != '\0')
			i++;
		else
		{
			break;
			return (0);
		}
	}
	if (plus_count < minus_count && minus_count % 2 != 0)
		sign = -1;
	return (num_for_str * sign);
}

