#include "main.h"

/**
 * print_diagonal - prints a diagonal line with '\' n times
 *@n: number of times to print \
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	do {
		for (j = 0; j <= i && n > 0; j++)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar(10);
		i++;
	} while (i < n);
}
