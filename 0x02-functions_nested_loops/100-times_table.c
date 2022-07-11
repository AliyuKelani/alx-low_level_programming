#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: starting point for timess table and returns nothing if n <0 or >15
 * Return: nothing
 */
void print_times_table(int n)
{
	int a, b, res;

	a = 0;
	while (a <= n && n > 0 && n < 16)
	{
		b = 0;
		while (b <= n)
		{
			res = a * b;
			if (b == 0)
				printf("%d,", res);
			else if (b == n)
				printf("% 4d\n", res);
			else
				printf("% 4d,", res);
			b++;
		}
		a++;
	}
}
