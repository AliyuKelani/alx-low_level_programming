#include "main.h"

/**
 * print_numbers - prints numbers 0 -9
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
