#include "main.h"

/**
 * print_rev - prints a string and termnating witha newline in reverse
 * @str: pointer to the string to be printed in reverse
 *
 * Return: nothing
 */
void print_rev(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(*(str + i - 1));
		i--;
	}
	_putchar(10);
}
