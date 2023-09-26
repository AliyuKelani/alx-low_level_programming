#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to the value to be swapped
 * @b: pointer to the value to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
