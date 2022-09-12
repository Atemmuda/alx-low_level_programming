#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * num1 - holds the number between 0 an 10
 * num2 - holds  the value of number between 0 and 10
 *
 * Return: 0 after printing the funtion
 */
int main(void)
{
	int num_1;
	int num_2;

	num_1 = 48;
	num_2 = 49;

	while (num_1 < 57)
	{
		while (num_2 < 58)
		{
			if (num_1 != num_2 && num_2 > num_1)
			{

				if (!(num_1 == 56 && num_2 == 57))
				{
					putchar(num_1);
					putchar(num_2);
					putchar((int) ',');
					putchar((int) ' ');
				}
			}
			num_2++;
		}
		num_1++;
	}

	putchar('\n');
	return (0);
}
