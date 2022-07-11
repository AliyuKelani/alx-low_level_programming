#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@i: number whose last digit is printed and returned
 *
 * Return: the last digit of i
 */
int print_last_digit(int i)
{
	int res = i % 10;

	if (res < 1)
		res = res * -1;
	_putchar(res + '0');
	return (res);
}
