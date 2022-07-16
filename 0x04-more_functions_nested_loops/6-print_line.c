#include "main.h"

/**
 * print_line - prints a line with '_' n times
 *@n: number of times to print _
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar(10);
}
