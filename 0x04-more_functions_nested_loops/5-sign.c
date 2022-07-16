#include "main.h"

/**
 * print_sign - print the sign of a number
 *@i: number to check
 *
 * Return: 1 if +ve -1 if -ve and 0 otherwise
 */
int print_sign(int i)
{
	int res;

	if (i < 0)
	{
		res = -1;
		_putchar('-');
	}
	else if (i > 0)
	{
		res = 1;
		_putchar('+');
	}
	else
	{
		res = 0;
		_putchar('0');
	}
	return (res);
}
