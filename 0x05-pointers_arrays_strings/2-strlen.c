#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: pointer to the string to be measured
 *
 * Return: lenght of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}
