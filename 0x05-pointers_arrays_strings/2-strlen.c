#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: char input
* Return: length of the input string
*/

int _strlen(char *s)
{
	int i;
	int sum;
	
	i = 1;
	sum = 0;

	char point = s[0];

	while (point != '\0')
	{
		sum++;
		point = s[i++];
	}
	return (sum);
}
