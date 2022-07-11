#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int a, b, res;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			res = a * b;
			if (res < 10)
			{
				if (b != 0)
					_putchar(' ');
				_putchar('0' + res);
			}
			else
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		a++;
		_putchar(10);
	}
}
