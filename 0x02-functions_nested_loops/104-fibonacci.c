#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
*        followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	int count;
	unsigned long int a, b, c;

	count = 2;
	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	while (count < 98)
	{
		c = a + b;
		if (count == 97)
			printf("%lu\n", c);
		else
			printf("%lu, ", c);
		a = b;
		b = c;
		count++;
	}
	return (0);
}
