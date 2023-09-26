#include <stdio.h>
#include "main.h"

/**
 * main - sum of even fibonacci numbers under 4,000,000
 * Return: 0
 */

int main(void)
{
	long int a, b, c;
	long int sum = 2;

	a = 1;
	b = 2;
	c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
			sum += c;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
