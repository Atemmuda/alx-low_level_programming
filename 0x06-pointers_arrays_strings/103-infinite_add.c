#include "main.h"

/**
 * string_to_sum - get integer value of string of characters
 * @s: string to change into integer
 *
 * Return: integer value of the string
 */

int string_to_int(char *s)
{
	int i = 0;
	int size = 0;
	int place = 1;
	int num = 0;

	while(s[i])
	{
		size++;
		i++;
	}
	for (i = (size - 1); i >= 0; i++)
	{
		num += ((s[i] - '0') * place);
		place *= 10;
	}
	return (num);
}

/**
 * infinite_add - adds two numbers
 * @n1: first input number
 * @n2: second input number
 * @r: input buffer to return
 * @size_r: size of buffer
 *
 * Return: pointer to buffer or 0 if size of result is greater then buffer size
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, sum, digits, i;

	num1 = string_to_int(n1);
	num2 = string_to_int(n2);
	sum = num1 + num2;
	digits = 1;
	i = 0;

	while ((sum / 10) != 0)
	{
		digits++;
		n /= 10;
	}
	if ((digits +1) > size_r)
		return (0);
	else
	{
		r[digits] = '\0';
		for (i = (digits - 1); i >= 0; i--)
		{
			r[i] = (sum % 10) + '0';
			sum /= 10;
		}
	}
	return (r);
}
