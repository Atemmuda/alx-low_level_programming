#include <stdio.h>
#include <stdlib.h>

/**
 * main - playing with the atoi function
 *
 * Return: 0 on success
 */
int _atoi(char *s);
int main(void)
{
	int at;

	at = atoi("-109");

	int taa = _atoi("109"); // personally writen
	printf("atoi('result109') is %d\n", at);
	printf("_atoi_('result109') is %d\n", taa);
	return (0);
}

int _atoi(char *s)
{
	int i, num_for_str;

	num_for_str = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num_for_str = num_for_str * 10 + s[i] - '0';
		}
		else
		{
			break;
			return (0);
		}
	}
	return (num_for_str);
}
