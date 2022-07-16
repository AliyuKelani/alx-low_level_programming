#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 except 2 and 4
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}
	_putchar(10);
}
