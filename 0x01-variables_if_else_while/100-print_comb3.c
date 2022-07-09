#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i <= 57)
	{
		j = i;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (j != 57 || i != 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);

	return (0);
}
