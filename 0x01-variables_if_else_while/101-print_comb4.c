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
	int num_3;

	num_1 = 48;
	num_2 = 49;
	num_3 = 50;

	while (num_1 < 56)
	{
		while (num_1 < 57)
		{
			putchar(num_1);

			while (num_3 < 58)
			{
				putchar(num_2);
				if (num_1 != num_2 && num_2 != num_3 && num_1 != num_3
						&& num_3 > num_2 && num_2 > num_1)
				{
					putchar(num_1);
					putchar(num_2);
					putchar(num_3);
					if (num_1 != 55 && num_2 != 56 && num_3 != 57)
					{
						putchar((int) ',');
						putchar((int) ' ');
					}
					num_3++;
				}
			}
			num_2++;
		}
		num_1++;
	}

	putchar('\n');
	return (0);
}
