#include "main.h"
/*
 * print_alphabet - prints lowercase letters
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
