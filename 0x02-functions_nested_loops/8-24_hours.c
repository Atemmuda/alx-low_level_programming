#include "main.h"
#include <time.h>

/**
 * jack_bauer: Print the time in 00:00 format
 */
void jack_bauer(void)
{
	time_t now;
	struct tm *cur_time;

	now = time(NULL);
	cur_time = localtime(&now);

	for (cur_time->tm_min)
	{
		_putchar(cur_time->tm_hour);
		_putchar(':');
		_putchar(cur_time->tm_min);
		_putchar(':');
		_putchar(cur-min->tm_sec);
		_putchar((char) 10);
	}

}
