#include "main.h"

/**
 * puts_half - prints half a string and termnating with a newline in reverse
 * @str: pointer to the string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	j = i / 2;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar(10);
}
