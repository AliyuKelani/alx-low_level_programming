#include "main.h"

/**
 * more_numbers - prints number 0 - 14 10X
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int digit = 0;

		while (digit <= 14)
		{
			if (digit > 9)
			{
				_putchar('1');
			}
			_putchar('0' + digit % 10);
			digit++;
		}
		_putchar(10);
	}
}
