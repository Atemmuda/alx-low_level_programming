#include "main.h"
#include <stdio.h>
#include <limits.h>

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

	/* Leading white spaces */
	sign = 1;
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

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
		{
			num_for_str = num_for_str * 10 + s[i] - '0';
		}
		else if (s[i] != '\0' || (s[i + 1] == ' '))
			i++;
		else
		{
			break;
			return (0);
		}
	}
	return (num_for_str * sign);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
