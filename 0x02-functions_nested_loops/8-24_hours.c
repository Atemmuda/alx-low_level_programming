#include <stdio.h>
#include "main.h"


/**
 * jack_bauer - Prints time in the digital time format
 * No parameter
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int hour, minute;

	for(hour = 0; hour <= 23; hour++)
	{
		for(minute = 0; minute <= 59; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}

