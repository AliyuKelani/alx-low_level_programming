#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int min, sec;

	min = 0;
	sec = 0;
	while (min < 24)
	{
		_putchar('0' + (min / 10));
		_putchar('0' + (min % 10));
		_putchar(':');
		_putchar('0' + (sec / 10));
		_putchar('0' + (sec % 10));
		_putchar(10);
		sec++;
		if (sec == 60)
		{
			min = min + 1;
			sec = 0;
		}
	}
}
