#include "main.h"

/**
 * _isalpha - checks if a charater is an alphabet or not
 *@c: parameter to check
 *
 * Return: 1 for alphabets and 0 otherwise
 */
int _isalpha(char c)
{
	int res;

	if (c >= 'a' && c <= 'z')
		res = 1;
	else if (c >= 'A' && c <= 'Z')
		res = 1;
	else
		res = 0;
	return (res);
}
