#include "main.h"

/**
 * _islower - checks if a charater is lowercase or not
 *@c: parameter to check
 *
 * Return: 1 for lowercase letters and 0 otherwise
 */
int _islower(char c)
{
	int res;

	if (c >= 'a' && c <= 'z')
		res = 1;
	else
		res = 0;
	return (res);
}
