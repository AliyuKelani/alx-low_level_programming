#include "main.h"

/**
 * print_square - prints a square using '#' n times
 *@n: number of times to print # into a square
 *
 * Return: nothing
 */
void print_square(int n)
{
	int i, j;

	i = 0;
	do {
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar(10);
		i++;
	} while (i < n);
}
