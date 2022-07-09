#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char c = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
		if (c == 'Z' + 1)
			c = 'a';
	}
	return (0);
}
