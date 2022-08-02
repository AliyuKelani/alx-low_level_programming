#include "main.h"

/**
 * puts2 - prints every other char of a string and termnating with a newline
 * @str: pointer to the string to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
