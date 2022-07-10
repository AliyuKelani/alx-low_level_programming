#include "main.h"

/**
 * _abs - returns the absolute value of a number
 *@i: number whose absolute value is returned
 *
 * Return: absolute value of i
 */
int _abs(int i)
{
	int res;

	if (i < 0)
		res = i * -1;
	else
		res = i * 1;
	return (res);
}
