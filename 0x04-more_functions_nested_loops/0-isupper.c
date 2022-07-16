#include "main.h"

/**
 * _isupper - checks if a charater is uppercase or not
 *@c: parameter to check
 *
 * Return: 1 for uppercase letters and 0 otherwise
 */
int _isupper(char c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
		res = 1;
	else
		res = 0;
	return (res);
}
