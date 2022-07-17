#include "main.h"

/**
 * print_number - prints any integer
 *@n: integer to write
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int len =  0, temp, i, lead, pow;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	temp = n;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

	pow = 1;
	for (i = 0; i < len; i++)
		pow *= 10;

	for (i = 0; i <= len; i++)
	{
		lead = n / pow;
		n = n - (lead * pow);
		pow /= 10;
		_putchar('0' + lead);
	}
}
