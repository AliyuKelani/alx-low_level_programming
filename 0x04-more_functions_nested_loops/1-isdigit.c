#include "main.h"

/**
 * _isdigit - checks if a charater code represent an integer 0 -9
 *@c: parameter to check
 *
 * Return: 1 for uppercase letters and 0 otherwise
 */
int _isdigit(int c)
{
	int res;

	if (c >= '0' && c <= '9')
		res = 1;
	else
		res = 0;
	return (res);
}
