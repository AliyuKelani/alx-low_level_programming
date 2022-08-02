#include "main.h"

/**
 * _puts - prints a string and termnating witha ne wline
 * @str: pointer to the string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
