#include "main.h"

/**
 * print_triangle - prints a triangle using '#' n times
 *@n: number of times to print # into a triangle
 *
 * Return: nothing
 */
void print_triangle(int n)
{
	int i, j;

	i = 0;
	do {
		for (j = 0; j < n; j++)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar(10);
		i++;
	} while (i < n);
}
