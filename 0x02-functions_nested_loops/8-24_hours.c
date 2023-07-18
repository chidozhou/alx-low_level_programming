#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrs_remainder;
	int mins_remainder;

	while (hrs <= 23)
	{
	while (mins <= 59)
	{
	mins_remainder = mins % 10;
	hrs_remainder = hrs % 10;
	_putchar(hrs / 10 + '0');
	_putchar(hrs_remainder + '0');
	_putchar(':');
	_putchar(mins / 10 + '0');
	_putchar(mins_remainder + '0');
	mins++;
	_putchar('\n');
	}
	hrs++;
	mins = 0;
}
}

